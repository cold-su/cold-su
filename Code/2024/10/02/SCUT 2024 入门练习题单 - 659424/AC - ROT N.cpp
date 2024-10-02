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

    std::string s;
    std::cin >> s;

    for (char& i : s) {
        char _c = i + n;
        int k = (int)_c - 64;
        k = k % 26;
        k = k == 0 ? 26 : k;
        k += 64;

        std::cout << (char)k;
        // println("{} {} ?", (char)k, (int)k);
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