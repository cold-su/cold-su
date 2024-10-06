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

struct _res {
    int val;

    bool operator < (const _res _) const {
        return abs(val) < abs(_.val);
    }
};

void solve() {
    int n, l;
    std::cin >> n >> l;
    std::vector<_res> nums(n);
    for (int i = 0; i < nums.size(); i++) {
        nums[i].val = l + i;
    }

    std::sort(nums.begin(), nums.end());

    int sum = 0;
    for (int i = 1; i < nums.size(); i++) {
        sum += nums[i].val;
    }
    std::cout << sum;
}

signed main() {
    if (HAVE_MULTIPLE_TESTCASES) {
        int t;
        std::cin >> t;
        while (t--) { solve(); }
    } else solve();
    return 0;
}