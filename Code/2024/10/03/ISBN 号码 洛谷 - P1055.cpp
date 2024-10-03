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
    std::cin >> s;

    int idx = 1, sum = 0;
    for (int i = 0; i < s.size() - 2; i++) {
        char a = s[i];
        if ('0' <= a && a <= '9') {
            sum += (size_t)(a - '0') * idx++;
        }
    }

    auto k = sum % 11 == 10 ? "X" : std::to_string((size_t)(sum % 11));

    if (s[s.size() - 1] == 'X' && k == "X" || s[s.size() - 1] == k[0]) {
        std::cout << "Right";
    } else {
        std::cout << s.substr(0, s.size() - 1) << k;
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