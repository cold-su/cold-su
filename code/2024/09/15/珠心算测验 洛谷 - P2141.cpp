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

    std::vector<int> nums(n);
    for (int& i : nums) {
        std::cin >> i;
    }
    std::ranges::sort(nums);

    std::vector<int> ans;
    for (int i = 0; i + 1 < n; i++) {
        for (int j = i + 1; j < n; j++) {
            int t = nums[i] + nums[j];
            for (int k = 0; k < n; k++) {
                if (nums[k] == t) {
                    ans.push_back(t);
                    break;
                }
            }
        }
    }
    
    std::ranges::sort(ans);
    auto it = std::unique(ans.begin(), ans.end());
    ans.resize(std::distance(ans.begin(), it));
    std::cout << ans.size();
}

signed main() {
    solve();
    return 0;
}