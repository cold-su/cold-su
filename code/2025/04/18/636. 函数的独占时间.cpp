class Solution {
public:
	vector<int> exclusiveTime(int n, vector<string>& logs) {
		std::vector<std::tuple<int, int, int>> s;
		// std::map<int, int> map;
		std::vector<int> ans(n);
		// int k = 0;
		for (auto x : logs) {
			std::stringstream ss(x);
			std::string t;
			getline(ss, t, ':');
			int p = std::stoi(t);
			getline(ss, t, ':');
			std::string op = t;
			getline(ss, t);
			int l = std::stoi(t);

			if (op == "start") {
				s.push_back({p, l, 0});
			} else if (op == "end") {
				auto [id, start, del] = s.back();
				int d = l - start + 1 - del;
				ans[id] += d;
				s.pop_back();
				if (s.size()) {
					auto& [id, start, _del] = s.back();
					_del += d + del;
				}
			}
		}
		// for (auto v : ans) {
		// 	std::cout << v << " ";
		// }
		return ans;
	}
};