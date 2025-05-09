class Solution {
public:
	int
	maxDepth(Node* r) {
		if (!r) {
			return 0;
		}
		int res = 0;
		for (auto c : r->children) {
			res = std::max(res, maxDepth(c));
		}
		return res + 1;
	}
};