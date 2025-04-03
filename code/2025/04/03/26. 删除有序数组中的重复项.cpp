class Solution {
public:
	int removeDuplicates(vector<int>& a) {
		int j = 0;
		for (int i = 1, n = a.size(); i < n; i++) {
			if (a[i] == a[j]) {

			} else {
				a[++j] = a[i];
			}
		}
		return j + 1;
	}
};