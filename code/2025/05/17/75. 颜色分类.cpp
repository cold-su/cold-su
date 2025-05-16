class Solution
{
public:
	void
	sortColors(std::vector<int>& a)
	{
		std::array<int, 3> cnt;
		for (int x : a) {
			cnt[x]++;
		}
		int i = 0;
		int color = 0;
		for (int& c : cnt) {
			while (c--) {
				a[i++] = color;
			}
			color++;
		}
	}
};