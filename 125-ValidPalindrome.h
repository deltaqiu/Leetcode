class Solution {
public:
    bool isPalindrome(string s) {
        int low = 0;
        int high = s.size()-1;
        while(low < high){
            while(low<high && !isalnum(s.at(low) )) low++;
            while(low<high && !isalnum(s.at(high) )) high--;
            if(tolower(s.at(low)) != tolower(s.at(high))){
                return false;
            }
            low++;
            high--;
        }
        return true;
    }
};