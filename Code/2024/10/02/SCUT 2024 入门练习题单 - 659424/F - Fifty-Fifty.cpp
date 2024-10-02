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

    std::map<char, int> map;
    for (char i : s) {
        map[i]++;
    }

    bool is = true;
    if (map.size() == 2) {
        for (auto [_, val] : map) {
            if (val != 2)
                is = false;
        }
        std::cout << (is ? "Yes" : "No");
    } else {
        std::cout << "No";
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