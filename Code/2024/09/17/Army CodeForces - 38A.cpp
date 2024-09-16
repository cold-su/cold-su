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

    std::vector<int> d(n - 1);
    for (int i = 0; i < n - 1; i++) {
        std::cin >> d[i];
    }

    int a, b;
    std::cin >> a >> b;

    int ans = 0;
    for (int i = a; i < b; i++) {
        ans += d[i - 1];
    }
    std::cout << ans;
}

signed main() {
    if (MULTIPLE_TESTCASES) {
        int t;
        std::cin >> t;
        while (t--) { solve(); }
    } else solve();
    return 0;
}