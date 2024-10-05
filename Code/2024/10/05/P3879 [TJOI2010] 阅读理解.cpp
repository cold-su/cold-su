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

    std::map<std::string, std::set<int>> map;
    int cnt = 0;
    while (n--) {
        int a;
        std::cin >> a;
        cnt++;
        while (a--) {
            std::string s;
            std::cin >> s;

            map[s].insert(cnt);
        }
    }

    int m;
    std::cin >> m;
    while (m--) {
        std::string s;
        std::cin >> s;
        auto set = map[s];

        if (set.size() == 0) {
            std::cout << "\n";
            continue;
        }

        for (auto it = set.begin(); it != set.end(); it++) {
            std::cout << *it << " ";
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