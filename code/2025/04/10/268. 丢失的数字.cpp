class Solution {
public:
	int missingNumber(vector<int>& a) {
		// std::ranges::sort(a);
		// int p = 0;
		// for (int i = 0, n = a.size(); i < n; i++) {
		// 	if (a[i] != p) {
		// 		break;
		// 	}
		// 	p++;
		// }
		// return p;
		int n = a.size();
		int p = n;
		for (int i = 0; i < n; i++) {
			p ^= a[i] ^ i;
		}
		return p;
	}
};