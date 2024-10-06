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

bool is_prime(int num) {
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0)
            return false;
    }
    return true;
}

void solve() {
    int n;
    std::cin >> n;

    int cnt = 0;
    for (int i = 2; i + 2 <= n; i++) {
        if (is_prime(i) && is_prime(i + 2)) {
            println("{} {}", i, i + 2);
            cnt++;
        }
    }
    if (cnt == 0) {
        std::cout << "empty";
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