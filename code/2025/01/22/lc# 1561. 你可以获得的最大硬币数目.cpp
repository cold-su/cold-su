class Solution {
  public:
	int maxCoins(vector<int>& piles) {
		ranges::sort(piles);
		int i = 0, j = piles.size() - 2;
		int ans = 0;
		while (i < j) {
			ans += piles[j];
			i++, j -= 2;
		}
		return ans;
	}
};