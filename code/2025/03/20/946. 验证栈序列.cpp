class Solution {
public:
	bool validateStackSequences(vector<int>& a, vector<int>& b) {
		std::vector<int> s;
		int n = a.size();
		for (int i = 0, j = 0; i < n; i++) {
			s.push_back(a[i]);
			while (j < n and not s.empty() and s.back() == b[j]) {
				j++;
				s.pop_back();
			}
		}
		return s.size() == 0;
	}
};