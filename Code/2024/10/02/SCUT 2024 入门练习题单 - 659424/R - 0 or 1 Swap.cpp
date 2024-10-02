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
    std::vector<int> nums(n);
    for (int& i : nums) {
        std::cin >> i;
    }

    if (std::is_sorted(nums.begin(), nums.end())) {
        std::cout << "YES";
        return;
    }

    auto temp = nums;
    for (int i = 0; i + 1 < nums.size(); i++) {
        for (int j = i + 1; j < nums.size(); j++) {
            if (nums[i] > nums[j]) {
                std::swap(temp[i], temp[j]);
                if (std::is_sorted(temp.begin(), temp.end())) {
                    std::cout << "YES";
                    return;
                } else {
                    temp = nums;
                }
            }
        }
    }
    std::cout << "NO";
}

signed main() {
    if (HAVE_MULTIPLE_TESTCASES) {
        int t;
        std::cin >> t;
        while (t--) { solve(); }
    } else solve();
    return 0;
}