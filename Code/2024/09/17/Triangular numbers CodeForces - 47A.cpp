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

    double k = (std::pow(8 * n + 1, 0.5) - 1) / 2;

    std::string s = std::to_string(k);
    int cnt = 0;
    bool is = false;
    for (char prev : s) {
        if (prev == '.') {
            is = true;
        }
        if (is && prev == '0') {
            cnt++;
        }
    }
    std::cout << (cnt == 6 ? "YES" : "NO");
}

signed main() {
    if (MULTIPLE_TESTCASES) {
        int t;
        std::cin >> t;
        while (t--) { solve(); }
    } else solve();
    return 0;
}