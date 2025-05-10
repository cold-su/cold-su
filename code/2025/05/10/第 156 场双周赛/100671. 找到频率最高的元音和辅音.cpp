class Solution {
public:
	int
	maxFreqSum(std::string s)
	{
		std::vector<int> a(26 + 'a');
		for (auto c : s) {
			a[c]++;
		}
		int ans = std::max({a['a'], a['e'], a['i'], a['o'], a['u']});
		int k = 0;
		for (int i = 'a'; i < a.size(); i++) {
			if (i != 'a' and i != 'e' and i != 'i' and i != 'o' and i != 'u') {
				k = std::max(k, a[i]);
			}
		}
		return ans + k;
	}
};