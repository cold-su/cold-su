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
    std::string s;
    std::cin >> s;

    bool is = true;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'U' || s[i] == 'D') {
            continue;
        }
        int a = i + 1;
        if (a % 2 == 1 && s[i] != 'R') {
            is = false;
        } else if (a % 2 == 0 && s[i] != 'L') {
            is = false;
        }
    }
    std::cout << (is ? "Yes" : "No");
}

signed main() {
    if (HAVE_MULTIPLE_TESTCASES) {
        int t;
        std::cin >> t;
        while (t--) { solve(); }
    } else solve();
    return 0;
}