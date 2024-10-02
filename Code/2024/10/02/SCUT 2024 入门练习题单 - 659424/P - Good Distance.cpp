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
    int n, d;
    std::cin >> n >> d;
    std::vector nums(n, std::vector<int>(d, 0));
    for (auto& i : nums) {
        for (auto& j : i) {
            std::cin >> j;
        }
    }

    int cnt = 0;
    for (int i = 0; i + 1 < n; i++) {
        for (int j = i + 1; j < n; j++) {
            double temp = 0;
            for (int k = 0; k < d; k++) {
                temp += pow(nums[i][k] - nums[j][k], 2);
            }
            temp = sqrt(temp);

            auto s = std::to_string(temp);

            bool is = false;
            int __cnt = 0;
            for (int i = 0; i < s.size(); i++) {
                char a = s[i];
                if (is && a == '0') {
                    __cnt++;
                }
                if (a == '.') {
                    is = true;
                }
            }

            cnt += __cnt == 6;
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