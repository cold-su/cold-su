#include <bits/stdc++.h>
using namespace std;

#define println(...) puts(format(__VA_ARGS__).c_str())
#define int long long int

const static auto init = [] {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    return nullptr;
} ();

void solve() {
    int n;
    std::cin >> n;
    std::vector<std::tuple<int, int, int>> res(n);

    for (int i = 0; i < n; i++) {
        int a, b, c;
        std::cin >> a >> b >> c;
        res[i] = {a, b, c};
    }

    int ans = 0;
    for (int i = 0; i + 1 < n; i++) {
        for (int j = i + 1; j < n; j++) {
            auto [a, b, c] = res[i];
            auto [_a, _b, _c] = res[j];

            bool each = true, total = true;
            if (std::abs(a - _a) > 5) each = false;
            if (std::abs(b - _b) > 5) each = false;
            if (std::abs(c - _c) > 5) each = false;
            if (std::abs(a + b + c - _a - _b - _c) > 10) total = false;

            if (each && total) {
                ans++;
            }
        }
    }
    std::cout << ans;
}

signed main() {
    solve();
    return 0;
}