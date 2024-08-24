#include <bits/stdc++.h>

using namespace std;

void solve() {
    string s;
    std::cin >> s;
    int idx = -1;
    for (int i = 0; i + 1 < s.size(); i++) {
        if (s[i] == s[i + 1]) {
            idx = i;
        }
    }
    if (idx == -1) {
        if (s.back() == 'a') {
            std::cout << s + "b" << "\n";
        } else {
            std::cout << s + "a" << "\n";
        }
    } else {
        string t = "a";
        if (s[idx] == 'a') {
            t = "b";
        }
        std::cout << s.substr(0, idx + 1) + t + s.substr(idx + 1) << "\n";
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int t;
    std::cin >> t;
    while (t--)
        solve();
    return 0;
}