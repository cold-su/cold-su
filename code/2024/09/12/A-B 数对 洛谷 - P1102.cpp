#include <bits/stdc++.h>
using namespace std;

#define println(...) puts(format(__VA_ARGS__).c_str())
#define int long long int

const static auto init = [] {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    return nullptr;
} ();

void solve() {
    int n, c;
    std::cin >> n >> c;
    vector<int> nums(n);
    for (int& i : nums) {
        std::cin >> i;
    }
    ranges::sort(nums);
    int ans = 0;
    for (int i = 0; i < n; i++) {
        ans += upper_bound(nums.begin(), nums.end(), nums[i] - c)
            - lower_bound(nums.begin(), nums.end(), nums[i] - c);
    }
    std::cout << ans;
}

signed main() {
    solve();
    return 0;
}