#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    std::cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        std::cin >> v[i];
    }
    std::sort(v.rbegin(), v.rend());
    std::cout << v[(v.size() - 1) / 2];
    std::cout << '\n';
}

int main() {

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t;
    std::cin >> t;
    while (t--) solve();

}