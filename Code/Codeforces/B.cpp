#include <bits/stdc++.h>
using namespace std;
void solve() {
    bool _ = true;
    int n;
    std::cin >> n;
    vector<bool> temp(n + 1);
    for (int i = 0; i < n; ++i) {
        int index;
        std::cin >> index;
        // index--;
        if (1 <= i && i <= n - 1) {
            if (index >= 1 && temp[index - 1] == false && temp[index + 1] == false) {
                _ = false;
                // std::cout << index << " " << i << "\n";
            }
        }
        temp[index] = true;

        // for (int i = 0; i < temp.size(); ++i) {
            // std::cout << temp[i] << " ";
        // }
        // std::cout << endl;
    }
    if (_) {
        std:cout << "YES\n";
    } else {
        std::cout << "NO\n";
    }
    // std::cout << endl;
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int t;
    std::cin >> t;
    while (t--) solve();
    return 0;
}