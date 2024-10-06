#include <bits/stdc++.h>

#define println(...) std::puts(std::format(__VA_ARGS__).c_str())
#define int long long int

const static auto INIT = [] {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    return nullptr;
}
();

const bool MULTIPLE_TESTCASES = false;

void solve() {
    std::string s, t;
    std::cin >> s >> t;
    bool is = s.size() == t.size();
    for (size_t i = 0, j = t.size() - 1; i < s.size(); i++, j--) {
        if (s[i] != t[j]) {
            is = false;
        }
    }
    std::cout << (is ? "YES" : "NO");
}

signed main() {
    if (MULTIPLE_TESTCASES) {
        int t;
        std::cin >> t;
        while (t--) { solve(); }
    } else solve();
    return 0;
}