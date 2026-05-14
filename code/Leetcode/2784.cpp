class Solution {
public:
    bool isGood(vector<int>& nums) {
		std::vector<int> b;
		for (int x : nums) {
			if (x > b.size()) {
				b.resize(x);
			}
			b[x - 1]++;
		}
		b.back()--;
		return b == std::vector<int>(b.size(), 1);
    }
};
