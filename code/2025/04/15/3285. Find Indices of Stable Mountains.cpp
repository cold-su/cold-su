class Solution {
public:
	vector<int> stableMountains(vector<int>& a, int k) {
		std::vector<int> ans;
		for (int i = 0, n = a.size(); i < n; i++) {
			if (i and a[i - 1] > k) {
				ans.push_back(i);
			}
		}
		return ans;
	}
};