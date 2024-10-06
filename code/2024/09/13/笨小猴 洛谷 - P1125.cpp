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
    map<char, int> map;
    string s;
    std::cin >> s;
    for (char i : s) {
        map[i]++;
    }
    int max = INT_MIN, min = INT_MAX;

    for (auto [key, val] : map) {
        if (val < min) min = val;
        if (val > max) max = val;
    }
    
    int size = max - min;
    bool is_prime = size < 2 ? false : true;
    for (int i = 2; i < sqrt(size); i++) {
        if (size % i == 0) is_prime = false;
    }

    if (is_prime) {
        println("{}\n{}", "Lucky Word", size);
    } else println("{}\n{}", "No Answer", 0);
}

signed main() {
    solve();
    return 0;
}