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
    int n;
    std::cin >> n;

    while (n--) {
        std::string s;
        std::cin >> s;

        for (int i = 0; i < s.size(); i++) {
            if (i == 0 && 'a' <= s[i] && s[i] <= 'z')
                s[i] -= 32;
            if (i != 0 && 'A' <= s[i] && s[i] <= 'Z')
                s[i] += 32;
        }

        std::cout << s << "\n";
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