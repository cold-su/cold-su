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

/* DECLARE FUNCTIONS */

void solve();
void cat(std::vector<int> nums);
void __cat(std::vector<std::vector<int>> matrix);
signed main();

/* MY SOLUTION */

const bool HAVE_MULTIPLE_TESTCASES = false;

void solve() {
}

/* TEMPLATE -BEGIN */

void cat(std::vector<int> nums) {
    for (int i : nums)
        std::cout << i << " ";
}

void __cat(std::vector<std::vector<int>> matrix) {
    for (std::vector<int> i : matrix) {
        for (int j : i)
            std::cout << j << " ";
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