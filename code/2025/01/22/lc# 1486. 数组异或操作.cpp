class Solution {
  public:
	int xorOperation(int n, int start) {
		vector<int> t;
		for (int i = 0; i < n; i++) {
			t.push_back(start + 2 * i);
		}
		int ans = t.front();
		for (int i = 1; i < n; i++) {
			ans ^= t[i];
		}
		return ans;
	}
};