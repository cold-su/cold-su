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
    while (true) {
        int n, m;
        std::cin >> n >> m;
        if (n == 0 && m == 0) {
            break;
        }

        std::vector<int> A(n);
        std::vector<int> B(m);
        std::map<int, int> map;

        for (int& i : A) {
            std::cin >> i;
            map[i]++;
        }
        for (int& i : B) {
            std::cin >> i;
            map[i]--;
        }

        int cnt = 0;
        for (auto [key, val] : map) {
            if (val > 0) {
                cnt++;
                std::cout << key << " ";
            }
        }

        if (cnt == 0) {
            std::cout << "NULL\n";
        } else {
            std::cout << "\n";
        }
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