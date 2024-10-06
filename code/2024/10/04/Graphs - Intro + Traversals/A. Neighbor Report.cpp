#include <bits/stdc++.h>

#define println(...) puts(std::format(__VA_ARGS__).c_str())
#define int long long int

const static auto INIT = [] {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    return 0;
} ();

/* MY SOLUTION */

const bool HAVE_MULTIPLE_TESTCASES = false;

void solve() {
    int n, m;
    std::cin >> n >> m;
    std::vector nums(n, std::vector<int>(0));

    for (int i = 0; i < m; i++) {
        int a, b;
        std::cin >> a >> b;
        a--;
        b--;
        nums[a].push_back(b);
        nums[b].push_back(a);
    }

    for (auto i : nums) {
        std::cout << i.size() << " ";
        for (auto j : i) {
            std::cout << j + 1 << " ";
        }
        std::cout << "\n";
    }
}

signed main() {
    if (HAVE_MULTIPLE_TESTCASES) {
        int t;
        std::cin >> t;
        while (t--) { solve(); }
    } else solve();
    return 0;
}