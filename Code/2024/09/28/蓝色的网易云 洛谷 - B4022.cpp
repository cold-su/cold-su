#include <bits/stdc++.h>

#define println(...) std::puts(std::format(__VA_ARGS__).c_str())
#define int long long int

const static auto INIT = [] {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    return 0;
} ();

/* MY SOLUTION */

const bool HAVE_MULTIPLE_TESTCASES = false;

struct _res {
    int val, idx;
};

void solve() {
    int n, m;
    std::cin >> n >> m;
    std::vector<_res> nums(n);

    std::map<int, std::vector<_res>> map;
    for (int i = 0; i < n; i++) {
        std::cin >> nums[i].val;
        nums[i].idx = i + 1;
        map[nums[i].val].push_back(nums[i]);
    }

    int i = 0;
    while (n--) {
        for (auto [_, val] : map) {
            if (i < val.size())
                std::cout << val[i].idx << "\n";
        }
        i++;
    }
}

signed main() {
    if (HAVE_MULTIPLE_TESTCASES) {
        int t;
        std::cin >> t;
        while (t--) { solve(); }
    } else solve();
    return 0;
}