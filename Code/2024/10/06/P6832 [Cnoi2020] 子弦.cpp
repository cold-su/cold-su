#include <bits/stdc++.h>

#define println(...) puts(std::format(__VA_ARGS__).c_str())
#define int long long int

const static auto INIT = [] {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    return 0;
} ();

const bool HAVE_MULTIPLE_TESTCASES = false;

void solve() {
    std::string s;
    std::cin >> s;

    std::map<char, int> map;
    for (int i = 0; i <= s.size(); i++) {
        map[s[i]]++;
    }   

    int ans = 0;
    for (auto [_, val] : map) {
        ans = std::max(val, ans);
    }   

    std::cout << ans;
}

signed main() {
    if (HAVE_MULTIPLE_TESTCASES) {
        int t;
        std::cin >> t;
        while (t--) { solve(); }
    } else solve();
    return 0;
}