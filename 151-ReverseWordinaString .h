class Solution {
public:
	void reverseWords(string &s) {
		if (s.size() > 0){
			while (s.size() > 0 && s.at(0) == ' ') 
				s.erase(0, 1);
			while (s.size() > 0 && s.at(s.size() - 1) == ' ')
				s.erase(s.size() - 1, 1);

			int high = s.size();
			for (int low = s.size() - 1; low >= 0; low--){
				if (s.at(low) == ' ' && s.at(low - 1) == ' '){
					s.erase(low, 1);
					high--;
				}
				else if (s.at(low) == ' '){
					reverse(s.begin() + low+1, s.begin() + high);
					high = low;
				}
				else if (low == 0)
					reverse(s.begin() + low, s.begin() + high);
			}
			reverse(s.begin(), s.end());
		}

	}
};