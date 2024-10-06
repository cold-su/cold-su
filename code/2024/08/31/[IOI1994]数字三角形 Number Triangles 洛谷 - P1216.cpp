#include <bits/stdc++.h>

#define println(...) puts(std::format(__VA_ARGS__).c_str())

using namespace std;

using u32 = unsigned;
using i64 = long long;
using u64 = unsigned long long;

const static auto init = [] {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    return nullptr;
}();

int main() {
    int r;
    std::cin >> r;
    vector res(r + 1, vector(r + 1, 0));
    for (int i = 1; i <= r; i++) {
        for (int j = 1; j <= i; j++) {
            std::cin >> res[i][j];
        }
    }
    for (int i = 1; i <= r; i++) {
        for (int j = 1; j <= i; j++) {
            res[i][j] = max(res[i - 1][j - 1], res[i - 1][j]) + res[i][j];
        }
    }
    int ans = 0;
    for (int i = 1; i <= r; i++) {
        ans = max(ans, res[r][i]);
    }
    std::cout << ans;
    return 0;
}