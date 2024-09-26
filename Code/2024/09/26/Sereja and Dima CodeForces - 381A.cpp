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
    int n, sum = 0;
    std::cin >> n;
    
    std::deque<int> nums(n);
    for (int& i : nums) {
        std::cin >> i;
    }

    int cnt = 0, __cnt = 0;
    bool is = true;
    for (int i = 0; i < n; i++) {
        int a = nums.front(), b = nums.back();
        if (is) {
            cnt += (a > b ? a : b);
        } else {
            __cnt += (a > b ? a : b);
        }

        if (a > b) {
            nums.pop_front();
        } else {
            nums.pop_back();
        }
        is = !is;
    }

    println("{} {}", cnt, __cnt);

}

signed main() {
    if (HAVE_MULTIPLE_TESTCASES) {
        int t;
        std::cin >> t;
        while (t--) { solve(); }
    } else solve();
    return 0;
}