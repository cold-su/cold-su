#include <bits/stdc++.h>

#define println(...) puts(std::format(__VA_ARGS__).c_str())

using namespace std;

const static auto init = [] {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    return nullptr;
}();

void solve() {
    int n;
    std::cin >> n;
    vector<int> res(65535), dp(65535, 1);
    for (int i = 1; i <= n; i++) {
        std::cin >> res[i];
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            if (res[j] < res[i]) {
                dp[i] = max(dp[i], dp[j] + 1);
            }
        }
    }
    std::cout << *max_element(1 + dp.begin(), 1 + dp.begin() + n);
}

int main() {
    solve();
    return 0;
}