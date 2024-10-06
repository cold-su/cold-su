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
    std::string s, t;
    std::cin >> s >> t;

    std::map<std::string, int> map;
    for (int i = 0; i < s.size(); i++) {
        map[s.substr(i, s.size())]++;
        map[s.substr(0, i)]++;
    }

    for (int i = 0; i < t.size(); i++) {
        map[t.substr(i, t.size())]++;
        map[t.substr(0, i)]++;
    }

    int max = INT_MIN;
    std::string ans;
    for (auto [key, val] : map) {
        max = std::max(val, max);
        if (val == max) {
            ans = ans.size() > key.size() ? ans : key;
        }
    }

    std::cout << ans.size();
}

signed main() {
    if (HAVE_MULTIPLE_TESTCASES) {
        int t;
        std::cin >> t;
        while (t--) { solve(); }
    } else solve();
    return 0;
}