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

void __solve(int& cnt, int n) {
    if (n == 1) {
        return;
    }

    cnt++;
    if (n % 2 == 1) {
        __solve(cnt, (3 * n +  1) / 2);
    } else {
        __solve(cnt, n / 2);
    }
}

void solve() {
    int n;
    std::cin >> n;

    int cnt = 0;
    __solve(cnt, n);
    std::cout << cnt;
}

signed main() {
    if (HAVE_MULTIPLE_TESTCASES) {
        int t;
        std::cin >> t;
        while (t--) { solve(); }
    } else solve();
    return 0;
}