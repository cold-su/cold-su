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
    int _;
    std::cin >> _;

    std::string s;
    std::cin >> s;

    std::map<char, int> map;

    for (char i : s) {
        if ('a' <= i && i <= 'z')
            map[i]++;
        else
            map[i + 32]++;
    }
    println("{}", map.size() == 26 ? "YES" : "NO");
}

signed main() {
    if (HAVE_MULTIPLE_TESTCASES) {
        int t;
        std::cin >> t;
        while (t--) { solve(); }
    } else solve();
    return 0;
}