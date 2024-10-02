#include <bits/stdc++.h>

#define println(...) std::puts(std::format(__VA_ARGS__).c_str())
#define int long long int

const static auto INIT = [] {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    return 0;
} ();

/* MY SOLUTION */

const bool HAVE_MULTIPLE_TESTCASES = false;

struct _res {
    std::string s;
    int val, idx;

    bool operator < (const _res _) const {
        if (s == _.s) {
            return val > _.val;
        }
        return s < _.s;
    }
};

void solve() {
    int n;
    std::cin >> n;
    std::vector<_res> nums(n);
    int j = 0;
    for (auto& [s, val, idx] : nums) {
        std::cin >> s >> val;
        idx = ++j;
    }

    std::sort(nums.begin(), nums.end());

    for (auto [_, __, idx] : nums)
        std::cout << idx << "\n";

}

signed main() {
    if (HAVE_MULTIPLE_TESTCASES) {
        int t;
        std::cin >> t;
        while (t--) { solve(); }
    } else solve();
    return 0;
}