#include <bits/stdc++.h>

#define println(...) std::puts(std::format(__VA_ARGS__).c_str())
#define int long long int

const static auto init = [] {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    return nullptr;
}
();

void solve() {
    int n;
    std::cin >> n;

    std::vector<double> __vec(n + 1);
    for (int i = 1; i <= n; i++) {
        if (i <= 150) {
            __vec[i] = 0.4463;
        }
        if (151 <= i && i <= 400) {
            __vec[i] = 0.4663;
        }
        if (401 <= i) {
            __vec[i] = 0.5663;
        }
    }

    double ans = 0;
    for (double prev : __vec) {
        ans += prev;
    }
    std::cout << std::fixed << std::setprecision(1) << ans;
}

signed main() {
    solve();
    return 0;
}