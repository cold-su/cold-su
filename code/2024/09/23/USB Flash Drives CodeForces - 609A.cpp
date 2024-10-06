#include <bits/stdc++.h>

#define println(...) std::puts(std::format(__VA_ARGS__).c_str())
#define int long long int

const static auto INIT = [] {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    return nullptr;
}
();

const bool HAVE_MULTIPLE_TESTCASES = false;

void solve() {
    int n;
    std::cin >> n;

    int t;
    std::cin >> t;

    std::vector<int> nums(n);
    for (int& i : nums)
        std::cin >> i;
    std::sort(nums.rbegin(), nums.rend());

    int sum = 0, ans;
    for (int i = 0; i < nums.size(); i++) {
        sum += nums[i];

        if (sum >= t) {
            ans = i;
            break;
        }
    }

    std::cout << ans + 1;
}

signed main() {
    if (HAVE_MULTIPLE_TESTCASES) {
        int t;
        std::cin >> t;
        while (t--) { solve(); }
    } else solve();
    return 0;
}