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
    
    int ans = INT_MIN;
    int a, b;
    for (int i = 1; i <= n; i++) {
        std::cin >> a;
        if (i == 1) {
            b = a;
        } else {
            b = max(a, a + b);
            ans = max(ans, b);
        }
    }
    std::cout << ans;
}

int main() {
    solve();
    return 0;
}