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
    int n, k;
    std::cin >> n >> k;

    vector<int> a, b;
    for (int i = 1; i <= n; i++) {
        if (i % k == 0) {
            a.push_back(i);
        } else b.push_back(i);
    }

    {
        int total = 0;
        for (int i : a) {
            total += i;
        }
        std::cout << fixed << setprecision(1) << (double)total / a.size();
    }
    std::cout << " ";
    {
        int total = 0;
        for (int i : b) {
            total += i;
        }
        std::cout << fixed << setprecision(1) << (double)total / b.size();
    }

}

signed main() {
    solve();
    return 0;
}