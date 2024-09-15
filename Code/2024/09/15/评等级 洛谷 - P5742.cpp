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

struct __res {
    int _, score, expect;

    int total() {
        return this->score + this->expect;
    }
};

void __solve(__res stu) {
    bool a = (stu.score * 7 + stu.expect * 3) >= 800;
    bool b = stu.total() > 140;
    if (a && b) {
        std::cout << "Excellent\n";
    } else std::cout << "Not excellent\n";
}

void solve() {
    int n;
    std::cin >> n;
    __res stu;
    while (n--) {
        int _;
        std::cin >> _;
        
        std::cin >> stu.score >> stu.expect;
        __solve(stu);
    }
}

signed main() {
    solve();
    return 0;
}