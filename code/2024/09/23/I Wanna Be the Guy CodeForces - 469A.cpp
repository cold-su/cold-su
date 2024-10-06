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

    std::map<int, int> map;

    int p;
    std::cin >> p;
    while (p--) {
        int a;
        std::cin >> a;
        map[a]++;
    }

    int q;
    std::cin >> q;
    while (q--) {
        int a;
        std::cin >> a;
        map[a]++;
    }

    println("{}"
        , map.size() == n ? "I become the guy." : "Oh, my keyboard!");
}

signed main() {
    if (HAVE_MULTIPLE_TESTCASES) {
        int t;
        std::cin >> t;
        while (t--) { solve(); }
    } else solve();
    return 0;
}