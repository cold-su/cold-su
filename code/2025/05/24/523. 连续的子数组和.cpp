class Solution {
public:
    bool checkSubarraySum(std::vector<int>& nums, int k) {
        // pref[i] - pref[j] === 0 (mod k)
        // pre[i] === pref[j] (mod k)
        int n = nums.size();
        std::vector<int> pref(n + 1);
        for (int i = 0; i < n; i++) {
            pref[i + 1] = pref[i] + nums[i];
        }
        std::map<int, int> map;
        // i - j >= 1
        for (int i = 0; i <= n; i++) {
            if (map.find(pref[i] % k) != map.end()) {
                return true;
            }
            if (i - 1 >= 0) {
                map[pref[i - 1] % k]++;
            }
        }
        return false;
    }
};