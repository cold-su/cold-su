class Solution {
  public:
	vector<int> replaceElements(vector<int>& a) {
		int max = -1;
		int n = a.size();
		int tmp = -1;
		for (size_t i = n; i--;) {
			tmp = a[i];
			a[i] = max;
			max = fmax(max, tmp);
		}
		return a;
	}
};