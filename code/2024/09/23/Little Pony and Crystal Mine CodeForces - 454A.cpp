#include <bits/stdc++.h>

#define println(...) std::puts(std::format(__VA_ARGS__).c_str())
#define int long long int

const static auto INIT = [] {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    return nullptr;
}
();

const bool HAVE_MULTIPLE_TESTCASES = false;

void solve() {
    int n;
    std::cin >> n;

    std::vector res(n, std::vector<int>(n));

    int mid = n / 2 + 1, cnt = 1;
    int m = mid - 1;
    for (int i = 0; i < n; i++) {
        if (i < mid) {
            cnt += 2;
            m--;
        } else {
            cnt -= 2;
            m++;
        }
        for (int j = m + 1; j < (n + cnt) / 2 - 1; j++) {
            res[i][j] = 1;
        }
    }

    for (auto i : res) {
        for (auto j : i) {
            std::cout << (j ? "D" : "*");
        }
        std::cout << "\n";
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