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
    int n = 4;
    std::vector<int> nums(n);
    for (int& i : nums) {
        std::cin >> i;
    }

    std::string s;
    std::cin >> s;

    int ans = 0;
    for (int i = 0; i < s.size(); i++) {
        ans += nums[s[i] - '0' - 1];
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