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

void solve() {
    int _;
    std::cin >> _;

    std::string s;
    std::cin >> s;

    for (int i = 0; i < s.size() / 2 + 1; i++) {
        auto t = s.substr(0, i);
        if (t + t == s) {
            std::cout << "Yes";
            return;
        }

        // println("{} {}?", t + t, s);
    }
    std::cout << "No";
}

signed main() {
    if (HAVE_MULTIPLE_TESTCASES) {
        int t;
        std::cin >> t;
        while (t--) { solve(); }
    } else solve();
    return 0;
}