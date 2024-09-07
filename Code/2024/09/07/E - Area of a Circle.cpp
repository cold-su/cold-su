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
    double r;
    std::cin >> r;
    double pi = 3.141592653;
    double ans = pow(r, 2) * pi;
    std::cout << fixed << setprecision(9) << ans;
}

signed main() {
    solve();
    return 0;
}