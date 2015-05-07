class Solution {
public:
    bool isNumber(string s) {
        int i = 0;
        int len = s.size();
        while(i<len && isspace(s.at(i))) i++;
        if(i<len && (s.at(i) == '+' || s.at(i) == '-')) i++;
        bool istrue = false;
        while(i < len && isdigit(s.at(i))){
            i++;
            istrue = true;
        }
        if(i<len && s.at(i) == '.'){
            i++;
            while(i < len && isdigit(s.at(i))){
                i++;
                istrue = true;
            }
        }
        if(istrue && i<len && s.at(i) == 'e'){
            i++;
            istrue = false;
            if(i<len && (s.at(i) == '+' || s.at(i) == '-')) i++;
            while(i <len && isdigit(s.at(i))){
                i++;
                istrue = true;
            }
        }
        while(i<len && isspace(s.at(i))) i++;
        return istrue && i == len;
        
    }
};