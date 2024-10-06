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

void __solve(int day, int& coins, int limit) {
    for (int i = 0; i < day && i < limit; i++) {
        coins += day;
    }
}

void solve() {
    int k;
    std::cin >> k;

    int ans = 0;
    for (int i = 1; k >= 0; i++) {
        __solve(i, ans, k);
        k -= i;
    }
    std::cout << ans;
}

signed main() {
    solve();
    return 0;
}