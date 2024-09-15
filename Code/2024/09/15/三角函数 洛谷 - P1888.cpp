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
    std::vector nums{a, b, c};
    std::ranges::sort(nums);
    int k = std::gcd(nums[0], nums[2]);
    println("{}/{}", nums[0] / k, nums[2] / k);
}

signed main() {
    solve();
    return 0;
}