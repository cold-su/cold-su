#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    std::cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        std::cin >> v[i];
    }
    // ranges::sort(v);
    vector<int> res(65535);
    for (int i = 1; i < n; i++) {
        res[abs(v[i] - v[i - 1])]++;
    }
    for (int i = 1; i < n; i++) {
        if (res[i] == 0) {
            std::cout << "Not jolly";
            return 0;
        }
    }
    std::cout << "Jolly";
    return 0;
}