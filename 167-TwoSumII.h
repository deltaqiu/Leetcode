class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> results;
        if(numbers.size() < 2){
            return results;
        }
        int low = 0;
        int high = numbers.size() - 1;
        while(low < high){
            if(numbers[low] + numbers[high] < target){
                low++;
            }
            else if (numbers[low] + numbers[high] > target){
                high--;
            }
            else{
                results.push_back(low+1);
                results.push_back(high+1);
                return results;
            }
        }
    }
};