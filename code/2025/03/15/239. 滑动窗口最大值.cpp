class max_queue {
	std::deque<int> d;
public:
	max_queue() {}

	void add(int x) {
		while (not d.empty() and d.back() < x) {
			d.pop_back();
		}
		d.push_back(x);
	}

	void del(int x) {
		if (not d.empty() and x == d.front()) {
			d.pop_front();
		}
	}

	int max() {
		return d.front();
	}
};

class Solution {
public:
	vector<int> maxSlidingWindow(vector<int>& nums, int k) {
		int n = nums.size();
		std::vector<int> ans;
		max_queue q;
		for (int i = 0; i < n; i++) {
			q.add(nums[i]);
			if (i - k + 1 < 0) {
				continue;
			}
			ans.push_back(q.max());
			q.del(nums[i - k + 1]);
		}
		return ans;
	}
};