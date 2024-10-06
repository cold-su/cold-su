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
    for (int i = 0; i < n; i++) {
        nums[i] = i + 1;
    }

    do {
        for (int i : nums) {
            std::cout << "    " << i;
        }
        std::cout << "\n";
    } while (next_permutation(nums.begin(), nums.end()));
}

signed main() {
    solve();
    return 0;
}