#include <bits/stdc++.h>

#define println(...) puts(std::format(__VA_ARGS__).c_str())

using namespace std;

const static auto init = [] {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    return nullptr;
} ();

void solve() {
    int n;
    std::cin >> n;
    vector<bool> res(4);

    bool _1 = false;
    bool _2 = false;

    if (n % 2 == 0 && n != 1) {
        _1 = true;
    }
    if (4 < n && n <= 12) {
        _2 = true;
    }

    res[0] = _1 == true && _2 == true;
    res[1] = _1 == true || _2 == true;
    res[2] = _1 == !_2;
    res[3] = _1 == false && _2 == false;

    for (bool ans : res) {
        std::cout << (int)ans << " ";
    }
}

int main() {
    solve();
    return 0;
}