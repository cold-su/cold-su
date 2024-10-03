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
    std::vector<std::pair<int, int>> nums(n);
    for (auto& [a, b] : nums) {
        std::cin >> a >> b;
    }

    for (int i = 0; i < nums.size(); i++) {
        for (int j = i + 1; j < nums.size(); j++) {
            for (int k = j + 1; k < nums.size(); k++) {

                auto [x1, y1] = nums[i];
                auto [x2, y2] = nums[j];
                auto [x3, y3] = nums[k];

                int a = y1 - y2;
                int b = x2 - x1;
                int c = x1 * y2 - y1 * x2;

                if (a * x3 + b * y3 + c == 0) {
                    std::cout << "Yes";
                    return;
                }
            }
        }
    }

    std::cout << "No";
}

signed main() {
    if (HAVE_MULTIPLE_TESTCASES) {
        int t;
        std::cin >> t;
        while (t--) { solve(); }
    } else solve();
    return 0;
}