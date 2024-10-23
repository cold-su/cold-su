class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        std::map<int, int> map;

        for (int i = 0; i < nums.size(); i++) {
        	map[nums[i]]++;
        }

        int max = 0; 
        for (auto [_, val] : map) {
        	max = std::max(val, max);
        }

        int ans = INT_MAX;
        for (auto [key, val] : map) {
        	if (val == max) {
		        int pos = 0, __pos = nums.size() - 1;
		        while (nums[pos] != key && pos < nums.size()) pos++;
		        while (nums[__pos] != key && __pos >= 0) __pos--;

		        ans = std::min(__pos - pos + 1, ans);
        	}
        }

        return ans;
    }
};