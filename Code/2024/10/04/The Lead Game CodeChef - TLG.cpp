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
    int n;
    std::cin >> n;

    int max = INT_MIN, win = 0;

    int cnt = 0, __cnt = 0;
    while (n--) {
        int a, b;
        std::cin >> a >> b;

        cnt += a;
        __cnt += b;

        int temp = abs(cnt - __cnt);

        if (temp > max) {
            max = temp;
            if (cnt > __cnt) {
                win = 1;
            } else {
                win = 2;
            }
        }
    }

    std::cout << win << " " << max;
}

signed main() {
    if (HAVE_MULTIPLE_TESTCASES) {
        int t;
        std::cin >> t;
        while (t--) { solve(); }
    } else solve();
    return 0;
}