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

    std::map<int, std::pair<int, int>> map;
    while (n--) {
        int t;
        std::cin >> t;

        int k, p;
        std::cin >> k >> p;
    
        map[t].first += k;
        map[t].second += p;
    }
    std::cout << (map[1].first >= map[1].second ? "LIVE" : "DEAD") << "\n"
        << (map[2].first >= map[2].second ? "LIVE" : "DEAD");
}

signed main() {
    if (HAVE_MULTIPLE_TESTCASES) {
        int t;
        std::cin >> t;
        while (t--) { solve(); }
    } else solve();
    return 0;
}