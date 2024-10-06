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
    int len, n;
    std::cin >> len >> n;
    std::vector<int> nums(len + 1, 0);
    for (int i = 0; i < n; i++) {
        int a, b;
        std::cin >> a >> b;

        for (int j = a; j <= b; j++) {
            nums[j] = 1;
        }
    }
    int ans = 0;
    for (int i : nums) {
        if (i == 0) ans++;
    }
    std::cout << ans;
}

signed main() {
    solve();
    return 0;
}