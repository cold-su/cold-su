class Skiplist {
public:
	std::multimap<int, bool> map;
	Skiplist() {

	}

	bool search(int target) {
		return map.count(target);
	}

	void add(int num) {
		map.insert(std::pair{num, true});
	}

	bool erase(int num) {
		if (!map.count(num)) {
			return false;
		}
		for (auto i = map.begin(); i != map.end(); i++) {
			if ((*i).first == num) {
				map.erase(i);
				break;
			}
		}
		return true;
	}
};

/**
 * Your Skiplist object will be instantiated and called as such:
 * Skiplist* obj = new Skiplist();
 * bool param_1 = obj->search(target);
 * obj->add(num);
 * bool param_3 = obj->erase(num);
 */