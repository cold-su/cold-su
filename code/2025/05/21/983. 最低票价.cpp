class Solution {
public:
	int mincostTickets(std::vector<int>& days, std::vector<int>& costs) {
		// f[i] == the minimum cost from day 0, 1, ..., days[i]
		// f[i] = min { f[i - 1] + cost[0], f[i - 7] + cost[1], f[i - 30] + cost[2] }
		// f[0] = 0
		const int max_day = 365;
		std::array<int, max_day + 31> f {};
		int n = days.size();
		int i = n - 1;
		for (int day = max_day + 1; day >= 0; day--) {
			if (day + 1 < f.size()) {
				f[day] = f[day + 1];
			}
			if (i >= 0 and day == days[i]) {
				i--;
				if (day + 1 < f.size()) {
					f[day] = f[day + 1] + costs[0];
				}
				if (day + 7 < f.size()) {
					f[day] = std::min(f[day + 7] + costs[1], f[day]);
				}
				if (day + 30 < f.size()) {
					f[day] = std::min(f[day + 30] + costs[2], f[day]);
				}
			}
		}
		return f[0];
	}
};