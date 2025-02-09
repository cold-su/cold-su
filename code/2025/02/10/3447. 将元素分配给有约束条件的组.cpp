class Solution {
  public:
	vector<int> assignElements(vector<int>& g, vector<int>& e) {
		int n = g.size();
		int MAX = std::ranges::max(g);
		MAX = fmax(MAX, std::ranges::max(e));
		std::vector<int> a(MAX + 1, INT_MAX);
		for (int i = 0; i < e.size(); i++) {
			if (a[e[i]] != INT_MAX) {
				continue;
			}
			for (int j = 1; j * e[i] <= MAX; j++) {
				a[j * e[i]] = fmin(a[j * e[i]], i);
			}
		}
		for (int i = 0; i < n; i++) {
			if (a[g[i]] == INT_MAX) {
				g[i] = -1;
			} else {
				g[i] = a[g[i]];
			}
		}
		return g;
	}
};