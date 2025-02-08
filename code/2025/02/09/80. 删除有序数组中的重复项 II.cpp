class Solution {
  public:
	int removeDuplicates(vector<int>& a) {
		int n = a.size(), k = 2;
		for (int i = 2; i < n; i++) {
			if (a[i] != a[k - 2]) {
				a[k] = a[i];
				k++;
			}
		}
		return std::min(k, n);
	}
};

class Solution {
  public:
	int removeDuplicates(vector<int>& a) {
		int p = INT_MIN;
		for (auto i = a.begin(); i != a.end(); i++) {
			if (p != INT_MIN and (p ^ *i) == 0) {
				while (i + 1 != a.end() and (p ^ * (i + 1)) == 0) {
					a.erase(i + 1);
				}
			}
			p = *i;
		}
		return a.size();
	}
};