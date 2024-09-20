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
    int n, m;
    std::cin >> n >> m;

    std::vector<int> nums(n);
    for (int& i : nums)
        std::cin >> i;

    std::map<int, int> map;
    while (m--) {
        int a;
        std::cin >> a;
        map[a]++;
    }

    for (int i : nums) {
        if (map[i])
            std::cout << i << " ";
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