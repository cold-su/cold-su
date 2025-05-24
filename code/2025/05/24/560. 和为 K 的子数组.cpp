class Solution {
public:
    int subarraySum(std::vector<int>& nums, int k) {
        int n = nums.size();
        std::vector<int> pref(n + 1, 0);
        for (int i = 0; i < n; i++) {
            pref[i + 1] = pref[i] + nums[i];
        }
        std::map<int, int> map;
        // if pref[i] - k exist, ans += map[pref[i] - k]
        int ans = 0;
        for (int i = 0; i <= n; i++) {
            int t = pref[i] - k;
            if (map.find(t) != map.end()) {
                ans += map[t];
            }
            map[pref[i]]++;
        }
        return ans;
    }
};