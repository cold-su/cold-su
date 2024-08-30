#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    std::cin >> n;
    vector<int> __vector(n);
    for (int i = 0; i < n; i++) {
        std::cin >> __vector[i];
    }

    std::sort(__vector.begin(), __vector.end());
    for (int prev : __vector) {
        std::cout << prev << " ";
    }
    return 0;
}