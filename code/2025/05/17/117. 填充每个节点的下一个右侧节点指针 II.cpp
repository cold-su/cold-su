class Solution
{
public:
	Node*
	connect(Node* r)
	{
		std::deque<std::pair<int, Node*>> s {{0, r}};
		int prev_d = 1;
		Node* p = nullptr;
		while (s.size()) {
			auto [d, u] = s.front();
			s.pop_front();
			if (!u) {
				continue;
			}
			if (prev_d == d) {
				p->next = u; 
			}
			s.emplace_back(d + 1, u->left);
			s.emplace_back(d + 1, u->right);
			prev_d = d;
			p = u;
		}
		return r;
	}
};