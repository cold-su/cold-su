#include <bits/stdc++.h>

using namespace std;

struct __res {
    int x, y, z;

    bool operator < (const __res _) const {
        return z < _.z;
    }
};

int main() {
    int n;
    std::cin >> n;
    vector<__res> t(n);
    for (int i = 0; i < n; i++) {
        std::cin >> t[i].x >> t[i].y >> t[i].z;
    }
    std::sort(t.begin(), t.end());
    double ans = 0;
    for (int i = 0; i + 1 < n; i++) {
        ans += pow(pow(t[i].x - t[i + 1].x, 2) 
            + pow(t[i].y - t[i + 1].y, 2) 
            + pow(t[i].z - t[i + 1].z, 2), 0.5);
    }
    std::printf("%.3lf", ans);
    return 0;
}