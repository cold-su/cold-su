class Solution {
public:
	bool isBalanced(string s) {
		int f[2] {};
		for (int i = 0, n = s.size(); i < n; i++) {
			(i & 1 ? f[1] : f[0]) += s[i] - '0';
		}
		return f[1] == f[0];
	}
};