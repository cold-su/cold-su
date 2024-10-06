#include <bits/stdc++.h>

#define println(...) puts(std::format(__VA_ARGS__).c_str())

using namespace std;

using i32 = int;
using u32 = unsigned;
using i64 = long long;
using u64 = unsigned long long;

const static auto init = [] {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    return nullptr;
}();

struct __res {
    int w;
    int s;
    int ws;

    bool operator < (const __res _) const {
        return ws < _.ws;
    }
};
int main() {
    int n;
    std::cin >> n;
    vector<__res> v(n);
    for (int i = 0; i < n; i++) {
        std::cin >> v[i].w >> v[i].s;
        v[i].ws = v[i].w + v[i].s;
    }
    std::sort(v.begin(), v.end());

    int k = 0;
    int ans = -v[0].s;
    for (int i = 0; i + 1 < n; i++) {
        k += v[i].w;
        ans = max(k - v[i + 1].s, ans);
    }
    println("{}", ans);
    return 0;
}