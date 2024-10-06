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
    std::string a, b;
    std::cin >> a >> b;

    for (int i = 0; i < a.size(); i++) {
        std::cout << !(a[i] == b[i]);
    }
}

signed main() {
    if (MULTIPLE_TESTCASES) {
        int t;
        std::cin >> t;
        while (t--) { solve(); }
    } else solve();
    return 0;
}