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
    string ans = "Yes";
    if (n == 1) ans = "No";
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            ans = "No";
        }
    }
    std::cout << ans;
}

signed main() {
    solve();
    return 0;
}