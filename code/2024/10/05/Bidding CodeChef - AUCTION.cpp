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

const bool HAVE_MULTIPLE_TESTCASES = true;

void solve() {
    int a, b, c;
    std::cin >> a >> b >> c;

    std::vector<std::pair<std::string, int>> nums = {
        { "Alice", a },
        { "Bob", b },
        { "Charlie", c }
    };

    std::sort(nums.begin(), nums.end(), [] (const auto a, const auto b) {
        auto [_, r] = a;
        auto [__, __r] = b;
        return r > __r;
    });

    std::cout << nums[0].first << "\n";
}

signed main() {
    if (HAVE_MULTIPLE_TESTCASES) {
        int t;
        std::cin >> t;
        while (t--) { solve(); }
    } else solve();
    return 0;
}