class Solution {
  public:
	int sumOfSquares(vector<int>& a) {
		int ans = 0;
		for (int n = a.size(), i = 1; int &x : a) {
			if (n % i++ == 0) {
				ans += pow(x, 2);
			}
		}
		return ans;
	}
};