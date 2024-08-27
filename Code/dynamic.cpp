#include <bits/stdc++.h>

using namespace std;

struct stu {
    int id;

    int cn;
    int _;
    int __;

    int total;

    bool operator<(const stu& b) const {
        if (total == b.total) {
            if (cn == b.cn) {
                return id < b.id;
            }
            return cn > b.cn;
        }
        return total > b.total;
    }
};

int main() {
    int n;
    std::cin >> n;
    vector<stu> arr(n);

    for (int i = 0; i < n; i++) {
        arr[i].id = i + 1;
        std::cin >> arr[i].cn >> arr[i]._ >> arr[i].__;
        arr[i].total = arr[i].cn + arr[i]._ + arr[i].__;
    }

    std::sort(arr.begin(), arr.end());

    for (int i = 0; i < 5; i++) {
        std::cout << arr[i].id << " " << arr[i].total << "\n";
    }
    return 0;
}