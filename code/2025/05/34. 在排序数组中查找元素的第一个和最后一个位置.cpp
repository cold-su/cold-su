class Solution {
public:
	vector<int> searchRange(vector<int>& a, int t) {
		int i = std::ranges::lower_bound(a, t) - a.begin();
		int n = a.size();
		int l = i < n and a[i] == t ? i : -1;
		int j = std::ranges::lower_bound(a, t + 1) - a.begin();
		int r = j < n and a[j] == t ? j : j > 0 and a[j - 1] == t ? j - 1 : -1;
		return {l, r};	
	}
};