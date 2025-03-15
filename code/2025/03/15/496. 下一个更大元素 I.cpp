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
	vector<int> nextGreaterElement(vector<int>& l, vector<int>& r) {
		int n = r.size();
		monostack<int> s;
		std::vector<int> next(n);
		for (size_t i = n; i--;) {
			while (not s.empty() and s.top().first <= r[i]) {
				s.pop();
			}
			next[i] = not s.empty() ? s.top().first : -1;
			s.push(r[i], i);
		}
		std::map<int, int> map;
		for (int i = 0; i < n; i++) {
			map[r[i]] = next[i];
		}
		int m = l.size();
		std::vector<int> ans(m);
		for (int i = 0; i < m; i++) {
			ans[i] = map[l[i]];
		}
		return ans;
	}
};