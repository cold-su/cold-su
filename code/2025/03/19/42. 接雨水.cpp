template <typename T, typename Cmp = std::less<T>>
class monostack {
	std::deque<std::pair<T, int>> d;
public:
	explicit monostack<T, Cmp>() {}

	bool empty() {
		return d.empty();
	}

	void push(T val, int i) {
		while (not d.empty() and Cmp{}(d.back().first, val)) {
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
	int trap(vector<int>& a) {
		monostack<int> s;
		int n = a.size(), ans = 0;
		for (int i = 0; i < n; i++) {
			while (not s.empty() and s.top().first < a[i]) {
				int bottom_h = s.top().first;
				s.pop();
				if (s.empty()) {
					break;
				}
				auto [left_h, left] = s.top();
				// s.pop();
				int h = std::min(left_h, a[i]) - bottom_h;
				int w = i - left - 1;
				ans += h * w;
			}
			s.push(a[i], i);
		}
		return ans;
	}
};