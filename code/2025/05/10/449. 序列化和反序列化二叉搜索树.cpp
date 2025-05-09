class Codec {
public: // same as 297. 二叉树的序列化与反序列化.cpp
	std::string serialize(TreeNode* root) {
		std::deque<TreeNode*> s {root};
		std::string res = "[";
		while (s.size()) {
			auto r = s.front();
			s.pop_front();
			if (!r) {
				res += "null";
			} else {
				res += std::to_string(r->val);
				s.push_back(r->left);
				s.push_back(r->right);
			}
			res += ',';
		}
		res.back() = ']';
		return res;
	}

	TreeNode* deserialize(std::string data) {
		std::vector<std::string> _data;
		std::string tmp {};
		for (auto c : data) {
			if (c == ',' || c == ']') {
				_data.push_back(tmp);
				tmp = "";
			} else if (c != '[') {
				tmp += c;
			}
		}
		TreeNode* root = new TreeNode(INT_MAX);
		std::deque<TreeNode*> s {root};
		for (auto c : _data) {
			auto r = s.front();
			s.pop_front();
			if (c != "null") {
				r->val = std::stoi(c);
				r->left = new TreeNode(INT_MAX);
				r->right = new TreeNode(INT_MAX);
				s.push_back(r->left);
				s.push_back(r->right);
			}
		}
		auto clean = [](this auto& clean, TreeNode* r) -> TreeNode* {
			if (!r) {
				return nullptr;
			}
			if (r->val == INT_MAX) {
				return nullptr;
			}
			return new TreeNode(r->val, clean(r->left), clean(r->right));
		};
		return clean(root);
	}
};