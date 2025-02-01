class Solution {
  public:
	vector<int> topKFrequent(vector<int>& nums, int k) {
		std::map<int, int> a;
		for (int x : nums) {
			a[x]++;
		}
		std::map<int, std::vector<int> > b;
		std::vector<int> p;
		for (auto [k, v] : a) {
			b[v].push_back(k);
			p.push_back(v);
		}
		std::sort(p.rbegin(), p.rend());
		std::vector<int> ans;
		for (int i = 0; i < k;) {
			auto t = b[p[i]];
			for (int x : t) {
				ans.push_back(x);
				i++;
			}
		}
		return ans;
	}
};