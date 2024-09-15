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
    double m, h;
    std::cin >> m >> h;
    double ans = m / std::pow(h, 2);
    if (ans < 18.5) {
        std::cout << "Underweight";
    } else if (18.5 <= ans && ans < 24) {
        std::cout << "Normal";
    } else {
        std::cout << ans << "\nOverweight";
    }
}

signed main() {
    solve();
    return 0;
}