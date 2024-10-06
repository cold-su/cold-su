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
    int n;
    std::cin >> n;

    std::string s;
    for (int i = 0; i < n; i++) {
        std::string temp;
        std::cin >> temp;
        s += temp;
    }

    int cnt = 0;
    for (int i = 0; i < n * 2; i++) {
        if (s[i] == s[i + 1]) {
            cnt++;
        }
    }
    std::cout << cnt + 1;
}

signed main() {
    if (MULTIPLE_TESTCASES) {
        int t;
        std::cin >> t;
        while (t--) { solve(); }
    } else solve();
    return 0;
}