class CombinationIterator {
  public:
	int idx = 0;
	std::vector<std::string> ans;
	CombinationIterator(string s, int k) {
		std::vector<std::string> ans;
		std::string p;
		int n = s.size();
		auto dfs = [&](this auto && dfs, int idx, int k) {
			if (k == 0) {
				ans.push_back(p);
				return;
			}
			for (int i = idx; i < n; i++) {
				p += s[i];
				dfs(i + 1, k - 1);
				p.pop_back();
			}
		};
		dfs(0, k);
		this->ans = ans;
	}

	string next() {
		return ans[idx++];
	}

	bool hasNext() {
		return idx < ans.size();
	}
};

/**
 * Your CombinationIterator object will be instantiated and called as such:
 * CombinationIterator* obj = new CombinationIterator(characters, combinationLength);
 * string param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */