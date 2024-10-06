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
    int n = 7;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        int a, b;
        std::cin >> a >> b;
        nums[i] = a + b - 8;
    }
    int max = *max_element(nums.begin(), nums.end());
    int ans = 0;
    for (int i = 0; i < n && max > 0; i++) {
        if (nums[i] == max) {
            ans = i + 1;
            break;
        }
    }
    std::cout << ans;
}

signed main() {
    solve();
    return 0;
}