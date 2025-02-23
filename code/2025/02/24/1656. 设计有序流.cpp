class OrderedStream {
public:
	std::vector<std::string> a;
	int p = 0;
	OrderedStream(int n) {
		a.resize(n);
	}

	vector<string> insert(int i, string val) {
		a[i - 1] = val;
		if (!check()) {
			return {};
		}
		return take();
	}

	bool check() {
		if (p >= a.size()) {
			return false;
		}
		return a[p].size() != 0;
	}

	std::vector<std::string> take() {
		std::vector<std::string> ans;
		while (check()) {
			ans.push_back(a[p]);
			p++;
		}
		return ans;
	}
};

/**
 * Your OrderedStream object will be instantiated and called as such:
 * OrderedStream* obj = new OrderedStream(n);
 * vector<string> param_1 = obj->insert(idKey,value);
 */