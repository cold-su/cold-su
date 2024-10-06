#include <bits/stdc++.h>

#define println(...) puts(std::format(__VA_ARGS__).c_str())

using namespace std;

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
        std::cin >> nums[i];
    }

    ranges::sort(nums);
    vector<int>::iterator it = unique(nums.begin(), nums.end());
    nums.resize(distance(nums.begin(), it));

    std::cout << nums.size() << "\n";
    for (int i : nums) {
        std::cout << i << " ";
    }
}

int main() {
    solve();
    return 0;
}