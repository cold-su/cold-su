class Solution
{
public:
	int
	rob(std::vector<int>& a)
	{
		// for each idx we can choose to pick or not to pick

		// f[n] -> f[n + 2] + the money of n th room     if nth room is robbed
		// f[n] -> f[n + 1] + 0                          otherwise

		// f[i] == the maximum money robbed from a[i], a[i + 1], ..., a[n - 1]
		int n = a.size();
		std::vector<int> f(n + 2);
		for (int i = n; i--;) {
			f[i] = std::max(f[i + 2] + a[i], f[i + 1] + 0);
		}
		return f[0]; // the maximum money robbed from a[0], a[1], ..., a[n - 1]
	}
};