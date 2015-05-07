class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result(2);
        unordered_map<int, int> map;
        for(int i = 0; i < nums.size(); i++){
            int x = nums[i];
            if(map.count(target - x) > 0){
                result[0] = map[target - x];
                result[1] = i + 1; 
                return result;
            }
            map.emplace(make_pair(nums[i], i+1));
        }
    }
};