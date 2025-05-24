class Solution {
public:
    int subarraySum(std::vector<int>& nums, int k, int ans = 0) {
        int n = nums.size();
        std::vector<int> pref(n + 1);
        for (int i = 0; i < n; i++) {
            pref[i + 1] = pref[i] + nums[i];
        }
        std::map<int, int> map;
        // pref[i] - pref[j] == k
        // pref[j] == pref[i] - k
        for (int x : pref) {
            int y = x - k;
            if (map.find(y) != map.end()) {
                ans += map[y];
            }
            map[x]++;
        }
        return ans;
    }
};