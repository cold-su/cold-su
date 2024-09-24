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
    std::vector<int> nums(n);

    int sum = 0;
    for (int& i : nums) {
        std::cin >> i;
        sum += i;
    }

    int s, t;
    std::cin >> s >> t;
    s--;
    t--;

    int ans = 0, __ans = 0;
    if (s > t)
        std::swap(s, t);

    for (int i = s; i < t; i++)
        ans += nums[i];

    std::cout << std::min(ans, sum - ans);
}

signed main() {
    if (HAVE_MULTIPLE_TESTCASES) {
        int t;
        std::cin >> t;
        while (t--) { solve(); }
    } else solve();
    return 0;
}