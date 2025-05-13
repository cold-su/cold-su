class Solution
{
public:
	std::vector<int>
	numberOfPairs(std::vector<int>& nums)
	{
		// to count pairs, firstly sort them
		// if a[i] == a[i + 1], ans += 1
		// make f[i] and f[i + 1] == false
		// the final answer is ans + counts of true in f
		// f stands for where it is not chosen yet
		std::ranges::sort(nums);
		int n = nums.size();
		std::vector<bool> f(n, true);
		int ans = 0;
		for (int i = 0; i + 1 < n; i++) {
			if (nums[i] == nums[i + 1] and f[i] and f[i + 1]) {
				ans++;
				f[i] = f[i + 1] = false; 
			}
		}
		return { ans, std::accumulate(f.begin(), f.end(), 0) };
	}
};