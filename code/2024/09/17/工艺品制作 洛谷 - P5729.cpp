#include <bits/stdc++.h>

#define println(...) std::puts(std::format(__VA_ARGS__).c_str())
#define int long long int

const static auto INIT = [] {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    return nullptr;
}
();

const bool MULTIPLE_TESTCASES = false;

void solve() {
    int res[25][25][25];

    int w, x, h;
    int q;
    std::cin >> w >> x >> h >> q;
    for (int i = 0; i < q; i++) {
        int x1, x2, y1, y2, z1, z2;
        std::cin >> x1 >> y1 >> z1 >> x2 >> y2 >> z2;
        for (int j = x1; j <=x2; j++) {
            for (int k = y1; k <= y2; k++) {
                for (int u = z1; u <= z2; u++) {
                    res[j][k][u] = 1;
                }
            }
        }
    }
    int cnt = 0;
    for (int i = 1; i <= w; i++) {
        for (int j = 1; j <= x; j++) {
            for (int k = 1; k <= h; k++) {
                if (!res[i][j][k]) {
                    cnt++;
                }
            }
        }
    }
    std::cout << cnt;
}

signed main() {
    if (MULTIPLE_TESTCASES) {
        int t;
        std::cin >> t;
        while (t--) { solve(); }
    } else solve();
    return 0;
}