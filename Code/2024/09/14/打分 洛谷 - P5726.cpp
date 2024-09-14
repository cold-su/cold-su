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

    ranges::sort(nums);

    vector<int> res;
    for (int i = 1; i < nums.size() - 1; i++) {
        res.push_back(nums[i]);
    }

    int sc = 0;
    for (int i : res) {
        sc += i;
    }
    printf("%.2lf\n", (double)sc / res.size());
}

signed main() {
    solve();
    return 0;
}