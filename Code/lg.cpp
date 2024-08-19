#include <bits/stdc++.h>
using namespace std;
using u32 = unsigned;
using i64 = long long;
using u64 = unsigned long long;
const static auto initialize = [] {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    return nullptr;
}();
struct stu {
    int num;//编号
    int c, m, e;
    int sum;
} student[310];
bool cmp(stu a, stu b) {
    if (a.sum > b.sum) { return 1; }
    else if (a.sum < b.sum) { return 0; }
    else {
        if (a.c > b.c) { return 1; }
        else if (a.c < b.c) { return 0; }
        else {
            if (a.num > b.num) { return 0; }
            else { return 1; }
        }
    }
}
int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        student[i].num = i; //录入编号
        cin >> student[i].c >> student[i].m >> student[i].e; //输入
        student[i].sum = student[i].c + student[i].m + student[i].e; //计算总分
    }
    sort(student + 1, student + 1 + n, cmp);
    for (int i = 1; i <= 5; i++) {
        cout << student[i].num << ' ' << student[i].sum << endl;
    }
    return 0;
}