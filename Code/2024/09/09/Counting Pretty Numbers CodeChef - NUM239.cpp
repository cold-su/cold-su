#include <bits/stdc++.h>
using namespace std;

#define println(...) puts(format(__VA_ARGS__).c_str())

const static auto init = [] {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    return nullptr;
} ();

void solve() {
    int l, r;
    std::cin >> l >> r;
        
    int ans = 0;
    for (int i = l; i <= r; i++) {
        if (i % 10 == 2 || i % 10 == 3 || i % 10 == 9) {
            ++ans;
        }
    }
    std::cout << ans << "\n";
}

signed main() {
    int t;
    std::cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}