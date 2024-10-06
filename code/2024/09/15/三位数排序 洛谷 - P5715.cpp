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
    int a, b, c;
    std::cin >> a >> b >> c;
    vector<int> nums = {a, b, c};
    ranges::sort(nums);
    for (int i : nums) {
        std::cout << i << " ";
    }
}

signed main() {
    solve();
    return 0;
}