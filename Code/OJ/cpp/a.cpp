#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <vector>

#define endl "\n"
#define end " "
#define IOS                           \
    std::ios::sync_with_stdio(false); \
    std::cin.tie(0);                  \
    std::cout.tie(0);
#define INF 1e9 + 7

using namespace std;

void read(std::vector<int> array) {
    for (auto prev : array) {
        std::cout << prev << end;
    }
    std::cout << endl;
}

void solve() {
    int m, n;
    std::cin >> m >> n;
    vector<vector<int>> dp(m, vector<int>(n, 1));
    for (int i = 1; i < m; i++) {
        for (auto row : dp) {
            for (auto single : row) {
                std::cout << single << " ";
            }
            std::cout << "\n";
        }
        std::cout << "\n\n";
        for (int j = 1; j < n; j++) {
            dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
        }
    }
    for (auto row : dp) {
        for (auto single : row) {
            std::cout << single << " ";
        }
        std::cout << "\n";
    }
}

int main() {
    IOS;
    int tc;
    std::cin >> tc;
    while (tc-- > 0) {
        solve();
    }
    return 0;
}
