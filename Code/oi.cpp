#include <bits/stdc++.h>

#define println(...) std::puts(std::format(__VA_ARGS__).c_str())
#define int long long int
#define _vec std::vector
#define wire std::string

const static auto INIT = [] {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    return nullptr;
}
();

/* DECLARE FUNCTIONS */

void solve();
void print_with_prec(double num, int precision);
int max(std::vector<int> nums);
int min(std::vector<int> nums);
void combine(std::vector<int> nums1, std::vector<int> nums2);
void view(int num);
void cat(std::vector<int> nums);
void __cat(std::vector<std::vector<int>> matrix);
signed main();

/* MY SOLUTION */

const bool HAVE_MULTIPLE_TESTCASES = false;

void solve() {
}

/* TEMPLATE -BEGIN- */
void print_with_prec(double num, int precision) {
    std::cout << std::fixed << std::setprecision(precision) << num << " ";
}

int max(std::vector<int> nums) {
    return *std::max_element(nums.begin(), nums.end());
}

int min(std::vector<int> nums) {
    return *std::min_element(nums.begin(), nums.end());
}

void combine(std::vector<int> nums1, std::vector<int> nums2) {
    for (int i = 0; i < nums2.size(); i++)
        nums1.push_back(nums2[i]);
}

void view(int num) {
    std::cout << num << " ";
}

void cat(std::vector<int> nums) {
    for (int i : nums)
        view(i);
    std::cout << "\n";
}

void __cat(std::vector<std::vector<int>> matrix) {
    for (std::vector<int> nums : matrix) {
        cat(nums);
        std::cout << "\n";
    }
    std::cout << "\n";
}

signed main() {
    if (HAVE_MULTIPLE_TESTCASES) {
        int t;
        std::cin >> t;
        while (t--) { solve(); }
    } else solve();
    return 0;
}