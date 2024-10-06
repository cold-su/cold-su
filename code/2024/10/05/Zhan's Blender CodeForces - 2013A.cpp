#include <bits/stdc++.h>

#define println(...) puts(std::format(__VA_ARGS__).c_str())
#define int long long int

const static auto INIT = [] {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    return 0;
} ();

/* MY SOLUTION */

const bool HAVE_MULTIPLE_TESTCASES = true;

void solve() {
    int n, x, y;
    std::cin >> n >> x >> y;

    int min = std::min(x, y);

    double temp = n / (double)min;
    int __temp = n / min;
    
    std::cout << (temp - __temp == 0 ? __temp : __temp + 1) << "\n";
}

signed main() {
    if (HAVE_MULTIPLE_TESTCASES) {
        int t;
        std::cin >> t;
        while (t--) { solve(); }
    } else solve();
    return 0;
}