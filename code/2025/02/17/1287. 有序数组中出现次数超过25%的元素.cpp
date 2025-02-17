class Solution {
  public:
	int findSpecialInteger(vector<int>& a) {
		int n = a.size();
		int p = n / 4;
		for (int i = 0; i + p < n; i++) {
			if (a[i] == a[i + p]) {
				return a[i];
			}
		}
		return 0;
	}
};

class Solution {
  public:
	int findSpecialInteger(vector<int>& arr) {
		std::map<int, int> m;
		for (int x : arr) {
			m[x]++;
		}
		int p = ceil(arr.size() / (double) 4);
		int ans = arr.front();
		for (auto [k, v] : m) {
			if (v >= p) {
				ans = k;
				p = v;
			}
		}
		return ans;
	}
};