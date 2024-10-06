#include <bits/stdc++.h>

#define println(...) puts(std::format(__VA_ARGS__).c_str())
#define int long long int

const static auto INIT = [] {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    return 0;
} ();

const bool HAVE_MULTIPLE_TESTCASES = true;

void solve() {
    int n;
    std::cin >> n;
    std::vector<int> nums(n);
    for (int& i : nums) {
        std::cin >> i;
    }

    int cnt = 0, __cnt = 0;
    for (int i = 0; i < nums.size(); i++) {
        if (i % 2 == 0) {
            cnt += nums[i];
        } else {
            __cnt += nums[i];
        }
    }

    std::cout << cnt - __cnt << "\n";
}

signed main() {
    if (HAVE_MULTIPLE_TESTCASES) {
        int t;
        std::cin >> t;
        while (t--) { solve(); }
    } else solve();
    return 0;
}