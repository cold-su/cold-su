class Solution
{
public:
	std::vector<int>
	smallestTrimmedNumbers(std::vector<std::string>& nums, std::vector<std::vector<int>>& queries)
	{
		int n = nums[0].size();
		int m = nums.size();
		std::map<int, std::vector<std::pair<std::string, int>>> map;
		std::vector<std::deque<std::pair<std::string, int>>> radix(10);
		std::vector<std::pair<std::string, int>> p(m);
		for (int i = 0; i < m; i++) {
			p[i].second = i;
		}
		for (int i = n; i--;) {
			for (auto& [s, idx] : p) {
				char dig = nums[idx][i];
				s = dig + s;
				radix[dig - '0'].emplace_back(s, idx);
			}
			int j = 0;
			for (int k = 0; k < 10; k++) {
				auto& r = radix[k];
				while (r.size()) {
					p[j++] = r.front();
					r.pop_front();
				}
			}
			map[n - i] = p;
		}
		std::vector<int> ans;
		for (auto q : queries) {
			int nth = q[0], trim = q[1];
			auto& p = map[trim];
			ans.emplace_back(p[nth - 1].second);
		}
		return ans;
	}
};