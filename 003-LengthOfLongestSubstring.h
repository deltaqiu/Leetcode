class Solution {
public:
	int lengthOfLongestSubstring(string s) {
		bool hash[256] = {false};
		int maxlen = 0;
		int i = 0;
		for (int j = 0; j < s.size(); j++) {
			while (hash[s.at(j)]) {
				hash[s.at(i)] = false;
				i++;
			}
			hash[s.at(j)] = true;
			maxlen = j - i + 1 > maxlen ? j - i + 1 : maxlen;
		}
		return maxlen;
	}
};