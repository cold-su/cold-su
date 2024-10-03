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

    std::vector<int> nums;
    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            nums.push_back(i);

            if (n / i != i) {
                nums.push_back(n / i);
            }
        }
    }
    std::ranges::sort(nums);

    for (int i : nums) {
        std::cout << i << "\n";
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