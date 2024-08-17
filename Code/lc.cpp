#include <bits/stdc++.h>
using namespace std;
using u32 = unsigned;
using i64 = long long;
using u64 = unsigned long long;
const static auto initialize = [] {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    return nullptr;
}();

void solve() {
    int n;
    std::cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        std::cin >> v[i];
    }
    if (n == 2 && v[0] + 1 < v[1]) {
        std::cout << "YES\n";
    } else {
        std::cout << "NO\n";
    }

}

int main() {
    int t;
    std::cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}