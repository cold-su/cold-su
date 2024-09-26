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

    std::vector<std::pair<int, int>> nums(n);
    for (auto& i : nums) {
        std::cin >> i.first >> i.second;
    }

    int cnt = 0;
    for (int i = 0; i + 1 < nums.size(); i++) {
        for (int j = i + 1; j < nums.size(); j++) {
            if (nums[i].first == nums[j].second) {
                cnt++;
            }

            if (nums[j].first == nums[i].second) {
                cnt++;
            }
        }
    }
    std::cout << cnt;
}

signed main() {
    if (HAVE_MULTIPLE_TESTCASES) {
        int t;
        std::cin >> t;
        while (t--) { solve(); }
    } else solve();
    return 0;
}