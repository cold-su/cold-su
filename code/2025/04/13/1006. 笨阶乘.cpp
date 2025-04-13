class Solution {
public:
	int clumsy(int n) {
		std::deque<int> s;
		int k = 0;
		while (n) {
			if (n >= 1) {
				s.push_back(n);
			}
			if (n >= 2) {
				s.back() *= n - 1;
			}
			if (n >= 3) {
				s.back() /= n - 2;
			}
			if (n >= 4) {
				k += n - 3;
			}
			n -= (n >= 1) + (n >= 2) + (n >= 3) + (n >= 4);
		}
		while (s.size() >= 2) {
			int a = s.front();
			s.pop_front();
			int b = s.front();
			s.pop_front();
			s.push_front(a - b);
		}
		return s.front() + k;
	}
};