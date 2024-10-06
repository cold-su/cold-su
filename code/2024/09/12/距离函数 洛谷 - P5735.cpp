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

double dis(pair<double, double> a, pair<double, double> b) {
    return sqrt(pow(b.first - a.first, 2) + pow(b.second - a.second, 2));
}

void solve() {
    double ans = 0;

    vector<pair<double, double>> nums(3);
    for (auto& i : nums) {
        std::cin >> i.first >> i.second;
    }

    ans += dis(nums[0], nums[1])
        + dis(nums[1], nums[2])
        + dis(nums[0], nums[2]);
    printf("%.2lf\n", ans);
}

signed main() {
    solve();
    return 0;
}