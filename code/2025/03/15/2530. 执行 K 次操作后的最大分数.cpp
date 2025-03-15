class Solution {
public:
	using i64 = long long;
	long long maxKelements(vector<int>& nums, int k) {
		std::priority_queue<int> q;
		for (int x : nums) {
			q.push(x);
		}
		i64 ans = 0;
		while (k--) {
			int max = q.top();
			ans += max;
			q.pop();
			q.push(ceil(max / (double) 3));
		}
		return ans;
	}
};