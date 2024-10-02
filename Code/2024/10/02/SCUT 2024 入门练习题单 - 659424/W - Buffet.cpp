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
    std::vector<int> A(n), B(n), C(n - 1);
    for (int& i : A) {
        std::cin >> i;
    }
    for (int& i : B) {
        std::cin >> i;
    }
    for (int& i : C) {
        std::cin >> i;
    }

    int ans = 0;
    for (int i = 0; i < A.size(); i++) {
        int a = A[i] - 1;
        ans += B[a];

        if (i + 1 < A.size() && A[i] + 1 == A[i + 1]) {
            ans += C[a];
        }
    }

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