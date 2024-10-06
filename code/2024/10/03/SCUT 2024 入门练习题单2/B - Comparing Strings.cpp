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

const bool HAVE_MULTIPLE_TESTCASES = false;

void solve() {
    int a, b;
    std::cin >> a >> b;

    auto _a = std::to_string(a);
    auto _b = std::to_string(b);

    auto temp = _a;
    for (int i = 0; i < b - 1; i++) {
        temp += _a;
    }

    auto __temp = _b;
    for (int i = 0; i < a - 1; i++) {
        __temp += _b;
    }

    auto ans = std::min(temp, __temp);
    std::cout << ans;
}

signed main() {
    if (HAVE_MULTIPLE_TESTCASES) {
        int t;
        std::cin >> t;
        while (t--) { solve(); }
    } else solve();
    return 0;
}