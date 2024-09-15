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
    int age;
    int score;
};

__res __solve(__res stu) {
    if (stu.score < 600) {
        stu.score = stu.score * 1.2;
        if (stu.score > 600) {
            stu.score = 600;
        }
    }
    stu.age++;
    println("{} {} {}", stu.name, stu.age, stu.score);
    return stu;
}

void solve() {
    int n;
    std::cin >> n;
    vector<__res> res(n);
    for (__res& i : res) {
        std::cin >> i.name >> i.age >> i.score;
        __solve(i);
    }
}

signed main() {
    solve();
    return 0;
}