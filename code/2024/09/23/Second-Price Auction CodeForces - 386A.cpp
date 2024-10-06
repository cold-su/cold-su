#include <bits/stdc++.h>

#define println(...) std::puts(std::format(__VA_ARGS__).c_str())
#define int long long int

const static auto INIT = [] {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    return nullptr;
}
();

const bool HAVE_MULTIPLE_TESTCASES = false;

void solve() {
    int n;
    std::cin >> n;

    std::vector<int> nums(n), temp;
    for (int& i : nums) {
        std::cin >> i;
    }

    temp = nums;
    std::sort(temp.rbegin(), temp.rend());
    int _ans = temp[1], max = temp[0];


    int ans = 1;
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] == max) {
            ans = i;
        }
    }
    
    println("{} {}", ans + 1, _ans);
}

signed main() {
    if (HAVE_MULTIPLE_TESTCASES) {
        int t;
        std::cin >> t;
        while (t--) { solve(); }
    } else solve();
    return 0;
}