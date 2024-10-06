#include <bits/stdc++.h>

using namespace std;

struct __res {
    int id, score;

    bool operator < (const __res _) const {
        if (score == _.score) {
            return id < _.id;
        }
        return score > _.score;
    }
};

int main() {
    int n, _;
    std::cin >> n >> _;

    int m = std::floor(_ * 1.5);

    vector<__res> t(n);
    for (int i = 0; i < n; i++) {
        std::cin >> t[i].id >> t[i].score;
    }
    std::sort(t.begin(), t.end());

    // 此思路来自 https://www.luogu.com.cn/record/175318136
    // 真乃妙
    while (t[m - 1].score == t[m].score) m++;
    std::cout << t[m - 1].score << " " << m << "\n";
    for (int i = 0; i < m; i++) {
        std::cout << t[i].id <<  " " << t[i].score << "\n";
    }

    return 0;
}