template <class T,
          class Container = std::deque<std::pair<T, int>>/*(value, index)*/,
          class Compare = std::less<T>>
class monoqueue {
protected:
	Container d;
public:
	explicit monoqueue<T, Compare>() {}
	bool empty() {return d.empty(); }
	void push(T val, int i) {while (not d.empty() and Compare{}(d.back().first, val)) {d.pop_back(); } d.push_back(std::pair{val, i}); }
	void erase(T val) {if (not d.empty() and d.front().first == val) {d.pop_front(); } }
	std::pair<T, int> top() {return d.front(); }
};
class Solution {
public:
	vector<int> maxSlidingWindow(vector<int>& a, int k) {
		monoqueue<int> q;
		int n = a.size();
		std::vector<int> ans;
		for (int i = 0; i < n; i++) {
			q.push(a[i], i);
			if (i - k + 1 < 0) {
				continue;
			}
			ans.push_back(q.top().first);
			q.erase(a[i - k + 1]);
		}
		return ans;
	}
};