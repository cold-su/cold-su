class Solution {
public:
	using u64 = unsigned long long;
	TreeNode* recoverFromPreorder(string traversal) {
		std::vector<std::pair<int, u64>> s;
		for (auto c : traversal) {
			if (c == '-') {
				if (s.size() and s.back().second == 0) {
					s.back().first++;
				} else {
					s.push_back({1, 0});
				}
			} else {
				if (s.size()) {
					s.back().second *= 10;
					s.back().second += c - '0';
				} else {
					s.push_back({0, c - '0'});
				}
			}
		}
		std::vector<std::pair<int, TreeNode*>> a;
		for (auto [d, val] : s) {
			auto p = new TreeNode(val);
			if (a.size()) {
				while (a.size() and a.back().first > d) {
					a.pop_back();
				}
				if (a.back().second->left || d == a.back().first) {
					a.pop_back();
					a.back().second->right = p;
					a.push_back({d, p});
				} else {
					a.back().second->left = p;
					a.push_back({d, p});
				}
			} else {
				a.push_back({d, p});
			}
		}
		return a.front().second;
	}
};