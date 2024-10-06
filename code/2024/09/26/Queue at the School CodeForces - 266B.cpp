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

const bool HAVE_MULTIPLE_TESTCASES = false;

void solve() {
    int n, t;
    std::cin >> n >> t;
    std::string s;
    std::cin >> s;

    for (int i = 0; i < t; i++) {
        for (int j = 0; j + 1 < s.size(); j++) {
            if (s[j] == 'B' && s[j + 1] == 'G') {
                std::swap(s[j], s[j + 1]);
                j++;
            }
        }
    }
    std::cout << s;
}

signed main() {
    if (HAVE_MULTIPLE_TESTCASES) {
        int t;
        std::cin >> t;
        while (t--) { solve(); }
    } else solve();
    return 0;
}