class TwoSum {
private:
	unordered_map<int, int> table;
public:
	void add(int number) {
		table[number] = table[number] + 1;
	}

	bool find(int value) {
		auto ptr = table.begin();
		while (ptr != table.end()){
			int key1 = ptr->first;
			int key2 = value - key1;
			if (key1 == key2){
				if (ptr->second >= 2){
					return true;
				}
			}
			else if (table.find(key2) != table.end()){
				return true;
			}
			ptr++;
		}
		return false;
	}
};