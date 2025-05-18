class Solution {
public:
	int longestSubsequence(std::vector<int>& a, int diff) {
		int n = a.size();
		// dp[i] == longest subseq with last element i
		std::map<int, int> memo;
		int ans = 0;
		for (int x : a) {
			memo[x] = 1 + memo[x - diff];
			ans = std::max(ans, memo[x]);
		}
		return ans;
	}
};