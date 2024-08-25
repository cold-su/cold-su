#include <bits/stdc++.h>

using namespace std;

void solve() {
    string s;
    std::cin >> s;
    if (s.size() > 10) {
        std::cout << s[0];
        std::cout << s.size() - 2;
        std::cout << s[s.size() - 1];
    } else {
        std::cout << s;
    }
    std::cout << '\n';
}

int main() {

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t;
    std::cin >> t;
    while (t--) solve();

}