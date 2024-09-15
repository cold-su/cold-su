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
    string name;
    int a, b, c, idx;

    bool operator < (const __res _) const {
        int u = a + b + c;
        int _u = _.a + _.b + _.c;
        if (u == _u) {
            return idx < _.idx;
        }
        return u > _u;
    }
};

void solve() {
    int n;
    std::cin >> n;
    vector<__res> res(n);
    int idx = 0;
    for (__res& i : res) {
        std::cin >> i.name >> i.a >> i.b >> i.c;
        i.idx = idx++;
    }
    std::sort(res.begin(), res.end());
    println("{} {} {} {}", res[0].name, res[0].a, res[0].b, res[0].c);
}

signed main() {
    solve();
    return 0;
}