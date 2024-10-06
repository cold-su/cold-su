#include <bits/stdc++.h>

#define println(...) puts(std::format(__VA_ARGS__).c_str())
#define int long long int

const static auto INIT = [] {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    return 0;
} ();

const bool HAVE_MULTIPLE_TESTCASES = false;

void solve() {
    int n, h;
    std::cin >> n >> h;
    std::vector<int> nums(n);

    int ans = 0;
    for (int& i : nums) {
        std::cin >> i;
        ans += 1 + (i > h);
    }
    std::cout << ans;
}

signed main() {
    if (HAVE_MULTIPLE_TESTCASES) {
        int t;
        std::cin >> t;
        while (t--) { solve(); }
    } else solve();
    return 0;
}