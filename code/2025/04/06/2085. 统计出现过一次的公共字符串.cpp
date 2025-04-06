class Solution {
public:
	int countWords(vector<string>& a, vector<string>& b) {
		std::map<std::string, int> m1, m2;
		for (auto& x : a) {
			m1[x]++;
		}
		for (auto& x : b) {
			m2[x]++;
		}
		int ans = 0;
		for (auto& [k, v] : m1) {
			ans += v == 1 and m2[k] == 1;
		}
		return ans;
	}
};