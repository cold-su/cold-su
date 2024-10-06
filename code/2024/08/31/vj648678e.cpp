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
    int first, second;

    bool operator < (const __res _) const {
        // return first + second < _.first + _.second;
        return second < _.second;
    }
};

int main() {
    int n, s;
    int a, b;
    std::cin >> n >> s >> a >> b;
    vector<__res> res(n);
    for (int i = 0; i < n; i ++) {
        std::cin >> res[i].first >> res[i].second;
    }

    std::sort(res.begin(), res.end());
    // for (auto prev : res) {
    //     println("{} {}", prev.first, prev.second);
    // }
    int cnt = 0;
    for (auto ik : res) {
        if (s < 0 || s - ik.second < 0) break;
        if (ik.first <= a + b) {
            // println("{} {} {}", ik.first, ik.second, s);
            s -= ik.second;
            cnt ++;
        }
    }
    std::cout << cnt;
    return 0;
}