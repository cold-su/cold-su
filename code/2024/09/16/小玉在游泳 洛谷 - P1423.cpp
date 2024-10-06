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
    double n;
    std::cin >> n;
    double ans = 0, __step = 2;
    int step = 0;
    while (ans < n) {
        ans += __step;
        __step *= 0.98;
        step++;
    }
    std::cout << step;
}

signed main() {
    solve();
    return 0;
}