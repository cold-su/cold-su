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

    bool is = true;
    for (int i = 0; i < n; i++) {
        bool was = true;
        for (int j = 0; j < n; j++) {
            res[i][j] = is == was;
            was = !was;
        }
        is = !is;
    }

    int cnt = 0;
    for (auto i : res) {
        for (auto j : i) {
            cnt += j;
        }
    }

    std::cout << cnt << "\n";
    for (auto i : res) {
        for (auto j : i) {
            std::cout << (j ? "C" : ".");
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