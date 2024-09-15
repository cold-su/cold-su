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
    int n, m;
    std::cin >> n >> m;
    std::map<int, int> __map;

    bool is = true;
    string __string, curr;
    for (int i = 0; i < n; i++) {
        string temp;
        std::cin >> temp;
        if (temp == curr) {
            is = false;
        }
        __string += temp;
        curr = temp;
    }

    for (char i : __string) {
        int idx = i - '0';
        __map[idx]++;
    }

    for (auto [key, val] : __map) {
        if (val % m != 0) {
            std::cout << "NO";
            return;
        }
    }
    std::cout << (is ? "YES" : "NO");

}

signed main() {
    solve();
    return 0;
}