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
    std::vector<int> cmp(7);
    std::vector nums(n, std::vector<int>(7));
    for (int& i : cmp) {
        std::cin >> i;
    }
    for (auto& i : nums) {
        for (int& j : i) {
            std::cin >> j;
        }
    }

    std::vector<int> ans(7);
    for (int j = 0; j < nums.size(); j++) {
        int cnt = 0;
        for (int k = 0; k < nums[j].size(); k++) {
            for (int u = 0; u < cmp.size(); u++) {
                if (cmp[u] == nums[j][k]) {
                    cnt++;
                }
            }
        }
        if (cnt) {
            ans[cnt - 1]++;
        }
    }
    std::reverse(ans.begin(), ans.end());
    for (int i : ans) {
        std::cout << i << " ";
    }
}

signed main() {
    solve();
    return 0;
}