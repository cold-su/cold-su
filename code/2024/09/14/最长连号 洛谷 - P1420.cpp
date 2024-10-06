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
    int n;
    std::cin >> n;
    vector<int> nums(n);
    for (int& i : nums) {
        std::cin >> i;
    }

    vector<int> res(n - 1);

    for (int i = 0; i < res.size(); i++) {
        res[i] = nums[i + 1] - nums[i];
    }

    int ans = 0;
    for (int i = 0; i < res.size(); i++) {
        int cnt = 0;
        if (res[i] == 1) {
            cnt++;
            
            int j = i + 1;
            while (res[j] == 1 && j++ < res.size()) {
                cnt++;
            }
        }
        ans = max(ans, cnt);
    }

    std::cout << ans + 1;
}

signed main() {
    solve();
    return 0;
}