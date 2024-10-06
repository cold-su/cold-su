#include <bits/stdc++.h>

using namespace std;

struct __res {
    string name;
    int year;
    int month;
    int day;
    int index;

    bool operator<(const __res b) const {
        if (year == b.year) {
            if (month == b.month) {
                if (day == b.day) {
                    return index > b.index;
                }
                return day < b.day;
            }
            return month < b.month;
        }
        return year < b.year;
    }
};

int main() {
    int n;
    std::cin >> n;
    vector<__res> t(n);
    for (int i = 0; i < n; i++) {
        std::cin >> t[i].name >> t[i].year >> t[i].month >> t[i].day;
        t[i].index = i;
    }
    std::sort(t.begin(), t.end());
    for(auto tt : t) {
        std::cout << tt.name << "\n";
    }
    return 0;
}