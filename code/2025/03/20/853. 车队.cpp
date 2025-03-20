class Solution {
public:
	int carFleet(int t, vector<int>& p, vector<int>& sp) {
		std::map<int, int> map;
		int n = p.size();
		for (int i = 0; i < n; i++) {
			map.insert(std::make_pair(p[i], sp[i]));
		}
		std::vector<double> s;
		for (auto [k, v] : map) {
			double time = (t - k) / (double) v;
			while (not s.empty() and s.back() <= time) {
				s.pop_back();
			}
			s.push_back(time);
		}
		return s.size();
	}
};