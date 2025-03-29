class Solution {
public:
	int reverseDegree(string s) {
		int i = 1;
		int ans = 0;
		for (char c : s) {
			ans += (26 - (c - 'a')) * i;
			i++;
		}
		return ans;
	}
}; ©leetcode