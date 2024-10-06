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
    int n;
    std::cin >> n;

    std::map<std::string, int> map;
    while (n--) {
        std::string s;
        std::cin >> s;

        map[s]++;
    }

    int max = INT_MIN;
    for (auto [_, val] : map) {
        max = std::max(max, val);
    }

    for (auto [key, val] : map) {
        if (val == max) {
            std::cout << key << "\n";
        }
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