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
    vector<int> nums;

    while (n != 1) {
        nums.push_back(n);
        if (n % 2 == 1) {
            n = n * 3 + 1;
        } else n /= 2;
    }
    nums.push_back(1);
    std::reverse(nums.begin(), nums.end());
    for (int i : nums) {
        std::cout << i << " ";
    }
}

signed main() {
    solve();
    return 0;
}