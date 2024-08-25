#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    string s;
    std::cin >> n >> s;
    if (s[0] == s[n - 1]) std::cout << "NO\n";
    else std::cout << "YES\n";
}

int main() {

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t;
    std::cin >> t;
    while (t--) solve();

}
