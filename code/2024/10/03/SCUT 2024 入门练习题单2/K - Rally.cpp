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
    std::vector<int> nums(n);
    for (int& i : nums) {
        std::cin >> i;
    }

    std::vector<std::pair<int, int>> pos(100, { INT_MAX, -1 });
    for (int i = 1; i <= 100; i++) {
        int sum = 0;
        for (int j = 0; j < nums.size(); j++) {
            sum += pow(nums[j] - i, 2);
        }
        pos[i - 1] = { sum, i };
    }

    std::sort(pos.begin(), pos.end(), [] (const auto a, const auto b) {
        return a.first < b.first;
    });

    std::cout << pos[0].first;
}

signed main() {
    if (HAVE_MULTIPLE_TESTCASES) {
        int t;
        std::cin >> t;
        while (t--) { solve(); }
    } else solve();
    return 0;
}