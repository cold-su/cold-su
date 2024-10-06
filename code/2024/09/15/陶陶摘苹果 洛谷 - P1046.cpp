#include <bits/stdc++.h>
using namespace std;

#define println(...) puts(format(__VA_ARGS__).c_str())
#define int long long int

const static auto init = [] {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    return nullptr;
} ();

void solve() {
    int n = 10;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        std::cin >> nums[i];
    }
    int k;
    std::cin >> k;

    int cnt = 0;
    for (int i : nums) {
        if (i <= k + 30) {
            cnt++;
        }
    }
    std::cout << cnt;
}

signed main() {
    solve();
    return 0;
}