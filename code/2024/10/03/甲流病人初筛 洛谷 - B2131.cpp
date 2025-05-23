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

    std::vector<std::tuple<std::string, float, bool>> nums(n);
    for (auto& [name, temp, is] : nums) {
        std::cin >> name >> temp >> is;
    }

    int cnt = 0;
    for (auto [name, temp, is] : nums) {
        if (temp >= 37.5 && is) {
            std::cout << name << "\n";
            cnt++;
        }
    }
    std::cout << cnt;
}

signed main() {
    if (HAVE_MULTIPLE_TESTCASES) {
        int t;
        std::cin >> t;
        while (t--) { solve(); }
    } else solve();
    return 0;
}