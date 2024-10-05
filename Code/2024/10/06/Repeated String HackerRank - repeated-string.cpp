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
    std::string s;
    int n;
    std::cin >> s >> n;

    int cnt = 0;
    for (auto i : s) {
        if (i == 'a') {
            cnt++;
        }
    }

    int k = n / s.size();
    int mod = n % s.size();

    int __cnt = 0;
    for (int i = 0; i < mod; i++) {
        if (s[i] == 'a') {
            __cnt++;
        }
    }

    std::cout << k * cnt + __cnt;
}

signed main() {
    if (HAVE_MULTIPLE_TESTCASES) {
        int t;
        std::cin >> t;
        while (t--) { solve(); }
    } else solve();
    return 0;
}