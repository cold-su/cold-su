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

    for (int i = 0; i < s.size(); i++) {
        int j = i;
        while (s[i] == s[j])
            j++;
        int left = j - i;
        i = j - 1;
        std::cout << left << s[i];
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