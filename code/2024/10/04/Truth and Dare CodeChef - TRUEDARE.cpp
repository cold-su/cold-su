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

std::pair<std::vector<int>, std::vector<int>> __solve() {
    std::set<int> t;
    std::set<int> d;

    int n;
    std::cin >> n;
    while (n--) {
        int a;
        std::cin >> a;

        t.insert(a);
    }

    int m;
    std::cin >> m;
    while (m--) {
        int a;
        std::cin >> a;

        d.insert(a);
    }

    std::vector<int> __t;
    std::vector<int> __d;
    for (int i : t) {
        __t.push_back(i);
    }
    for (int i : d) {
        __d.push_back(i);
    }

    std::ranges::sort(__t);
    std::ranges::sort(__d);

    return { __t, __d };
}

void solve() {
    auto [t, d] = __solve();
    auto [__t, __d] = __solve();

    bool is = std::includes(t.begin(), t.end(), __t.begin(), __t.end());
    bool __is = std::includes(d.begin(), d.end(), __d.begin(), __d.end());

    std::cout << (is == __is && is == true ? "yes" : "no") << "\n";
}

signed main() {
    if (HAVE_MULTIPLE_TESTCASES) {
        int t;
        std::cin >> t;
        while (t--) { solve(); }
    } else solve();
    return 0;
}