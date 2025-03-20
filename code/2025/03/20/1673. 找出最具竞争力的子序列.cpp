class Solution {
public:
	vector<int> mostCompetitive(vector<int>& a, int k) {
		std::vector<int> s;
		k = a.size() - k;
		for (int x : a) {
			while (not s.empty() and k and s.back() > x) {
				k--;
				s.pop_back();
			}
			s.push_back(x);
		}
		while (k--) {
			s.pop_back();
		}
		return s;
	}
};