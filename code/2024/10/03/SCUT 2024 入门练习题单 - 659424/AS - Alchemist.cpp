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
    std::deque<double> nums(n);
    for (double& i : nums) {
        std::cin >> i;
    }

    std::ranges::sort(nums);

    while (nums.size() > 1) {
        double a = nums.front();
        nums.pop_front();
        double b = nums.front();
        nums.pop_front();

        double c = (a + b) / (double)2;
        nums.push_front(c);

        std::ranges::sort(nums);
    }

    std::cout << nums.front();
}

signed main() {
    if (HAVE_MULTIPLE_TESTCASES) {
        int t;
        std::cin >> t;
        while (t--) { solve(); }
    } else solve();
    return 0;
}