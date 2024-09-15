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
    // std::cout << n * (n + 1) / 2;
    int ans = 0;
    for (int i = 0; i < n; i++) {
        ans += i + 1;
    }
    std::cout << ans;
}

signed main() {
    solve();
    return 0;
}