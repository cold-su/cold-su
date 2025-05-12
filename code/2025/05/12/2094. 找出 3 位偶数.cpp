class Solution
{
public:
	std::vector<int>
	findEvenNumbers(std::vector<int>& d)
	{
		std::vector<int> ans;
		int n = d.size();
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				for (int k = 0; k < n; k++) {
					if (i != j and j != k and i != k) {
						int number = d[i] * 100 + d[j] * 10 + d[k];
						if (number % 2 == 0 and number >= 100) {
							ans.push_back(number);
						}
					}
				}
			}
		}
		std::ranges::sort(ans);
		auto it = std::unique(ans.begin(), ans.end());
		return std::vector(ans.begin(), it);
	}
};