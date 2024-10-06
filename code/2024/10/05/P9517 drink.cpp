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

    int cnt = 0;
    for (int& i : nums) {
        std::cin >> i;
        cnt += i;
    }

    int ans = 0;
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i]) {
            int j = i;
            while (cnt) {
                cnt -= nums[j++];
            }
            ans = j - i;
            break;
        }
    }

    std::cout << ans; 
}

signed main() {
    if (HAVE_MULTIPLE_TESTCASES) {
        int t;
        std::cin >> t;
        while (t--) { solve(); }
    } else solve();
    return 0;
}