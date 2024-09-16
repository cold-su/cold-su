#include <bits/stdc++.h>

#define println(...) std::puts(std::format(__VA_ARGS__).c_str())
#define int long long int

const static auto init = [] {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    return nullptr;
}
();

void solve() {
    int n;
    std::cin >> n;

    std::vector<int> nums;
    int limit = n * n;
    while (limit > 0) {
        int temp;
        std::cin >> temp;
        nums.push_back(temp);
        limit -= temp;
    }

    int cnt = 0;
    bool flag;
    for (int i : nums) {
        flag = !flag;
        while (i--) {
            if (cnt == n) {
                std::cout << "\n";
                cnt = 0;
            }
            std::cout << !flag;
            cnt++;
        }
    }
}

signed main() {
    solve();
    return 0;
}