#include <bits/stdc++.h>

#define println(...) std::puts(std::format(__VA_ARGS__).c_str())
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
    int n;
    std::cin >> n;

    int cnt = 0
        , _cnt = 0
        , __cnt = 0;
    while (n--) {
        int a;
        std::cin >> a;
        if (a == 1)
            cnt++;
        if (a == 5)
            _cnt++;
        if (a == 10)
            __cnt++;
    }

    for (int i : { cnt, _cnt, __cnt }) {
        std::cout << i << "\n";
    }

}

signed main() {
    if (HAVE_MULTIPLE_TESTCASES) {
        int t;
        std::cin >> t;
        while (t--) { solve(); }
    } else solve();
    return 0;
}