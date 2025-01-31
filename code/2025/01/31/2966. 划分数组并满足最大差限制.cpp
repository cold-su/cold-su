class Solution {
  public:
	vector<vector<int>> divideArray(vector<int>& a, int k) {
		std::ranges::sort(a);
		int n = a.size();
		std::vector ans(n / 3, std::vector<int> (3));
		int i = 0;
		for (auto &x : ans) {
			for (int &y : x) {
				y = a[i];
				i++;
			}
			if (x.back() - x.front() > k) {
				return {};
			}
		}
		return ans;
	}
};