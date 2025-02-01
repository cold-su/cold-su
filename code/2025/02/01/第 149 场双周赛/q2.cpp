class Solution {
  public:
	int maxFreeTime(int t, int k, vector<int>& a, vector<int>& b) {
		std::vector<int> p {a[0]};
		for (int i = 0; i + 1 < a.size(); i++) {
			p.push_back(a[i + 1] - b[i]);
		}
		p.push_back(t - b.back());
		// std::sort(p.rbegin(), p.rend());
		int ans = 0, sum = 0;
		for (int i = 0; i < p.size(); i++) {
			sum += p[i];
			ans = std::max(ans, sum);
			if (i - k >= 0) {
				sum -= p[i - k];
			}
		}
		return ans;
	}
};