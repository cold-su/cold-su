#include <bits/stdc++.h>

#define println(...) puts(std::format(__VA_ARGS__).c_str())

using namespace std;

const static auto init = [] {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    return nullptr;
} ();

struct __res {
    string str;

    bool operator<(const __res b) const {
        return str + b.str > b.str + str;
    }
};

void solve() {
    int n;
    std::cin >> n;

    vector<__res> nums(n);
    for (int i = 0; i < n; i++) {
        std::cin >> nums[i].str;
    }

    std::sort(nums.begin(), nums.end());
    for(__res i : nums) {
        std::cout << i.str;
    }
}

int main() {
    solve();
    return 0;
}