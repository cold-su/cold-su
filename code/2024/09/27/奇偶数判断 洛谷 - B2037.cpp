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
void combine(std::vector<int> nums1, std::vector<int> nums2);
void cat(std::vector<int> nums);
void __cat(std::vector<std::vector<int>> matrix);
signed main();

/* MY SOLUTION */

const bool HAVE_MULTIPLE_TESTCASES = false;

void solve() {
    int n;
    std::cin >> n;

    if (n == 0)
        return;

    println("{}", n % 2 == 0 ? "even" : "odd");
}

/* TEMPLATE -BEGIN */

void combine(std::vector<int> nums1, std::vector<int> nums2) {
    for (int i = 0; i < nums2.size(); i++) {
        nums1.push_back(nums2[i]);
    }
}

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