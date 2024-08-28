#include <bits/stdc++.h>

using namespace std;

struct __res {
    int m;
    double val;

    bool operator<(const __res b) const {
        return val * b.m > m * b.val;
    }
};

int main() {
    int n, t;
    std::cin >> n >> t;
    vector<__res> nums(n);
    for (int i = 0; i < n; i++) {
        std::cin >> nums[i].m >> nums[i].val;
    }
    std::sort(nums.begin(), nums.end());
    double ans = 0;
    for (int i = 0; i < n; i++) {
        if (nums[i].m <= t) {
            t -= nums[i].m;
            ans += nums[i].val;
        } else {
            ans += nums[i].val / nums[i].m * t;
            break;
        }
    }
    std::printf("%.2lf", ans);
    return 0;
}