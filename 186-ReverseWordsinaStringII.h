class Solution {
public:
    void reverseWords(string &s) {
        int high = s.size();
        for(int low = s.size()-1; low >= 0; low--){
            if(s.at(low) == ' '){
                reverse(s.begin()+low+1, s.begin()+high);
                high = low;
            }
            else if(low == 0){
                reverse(s.begin(), s.begin()+high);
            }
        }
        reverse(s.begin(), s.end());
    }
};