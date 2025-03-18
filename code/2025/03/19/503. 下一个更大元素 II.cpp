template <typename T>
class monostack {
	std::deque<std::pair<T, int>> d;
public:
	explicit monostack<T>() {}

	bool empty() {
		return d.empty();
	}

	void push(T val, int i) {
		while (not d.empty() and d.back().first <= val) {
			d.pop_back();
		}
		d.push_back({val, i});
	}

	void pop() {
		d.pop_back();
	}

	std::pair<T, int> top() {
		return d.back();
	}
};

class Solution {
public:
	vector<int> nextGreaterElements(vector<int>& a) {
		int n = a.size();
		monostack<int> s;
		for (size_t i = n - 1; i--;) {
			s.push(a[i], i);
		}
		std::vector<int> b(n);
		for (size_t i = n; i--;) {
			while (not s.empty() and s.top().first <= a[i]) {
				s.pop();
			}
			b[i] = not s.empty() ? s.top().first : -1;
			s.push(a[i], i);
		}
		return b;
	}
};