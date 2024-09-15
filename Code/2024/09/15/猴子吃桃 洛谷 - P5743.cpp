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

    int ans = 1;
    for (int i = 0; i < n - 1; i++) {
        ans = (ans + 1) * 2;
    }
    std::cout << ans;
}

signed main() {
    solve();
    return 0;
}