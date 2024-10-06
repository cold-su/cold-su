#include <bits/stdc++.h>

#define println(...) puts(std::format(__VA_ARGS__).c_str())
#define int long long int

const static auto INIT = [] {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    return 0;
} ();

const bool HAVE_MULTIPLE_TESTCASES = true;

void solve() {
    int n;
    std::cin >> n;
    std::vector<int> nums(n);
    for (int& i : nums) {
        std::cin >> i;
    }


    while (nums.size() != 1) {
        std::sort(nums.rbegin(), nums.rend());
        int s = nums.size();
        int k = (nums[s - 1] + nums[s - 2]) / 2;
        nums.resize(s - 2);
        nums.push_back(k);
    }
    std::cout << nums[0] << "\n";
}

signed main() {
    if (HAVE_MULTIPLE_TESTCASES) {
        int t;
        std::cin >> t;
        while (t--) { solve(); }
    } else solve();
    return 0;
}