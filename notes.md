# Notes

```cpp
#include <bits/stdc++.h>
using namespace std;
const static auto initialize = [] {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    return nullptr;
}();

int search(int left, int right, std::function<bool(int)> match) {
    while (left <= right) {
        int mid = left + ((right - left) >> 1);
        if (match(mid)) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return left - 1;
}

int countingSort(vector<int>& nums) {
    int min = *min_element(nums.begin(), nums.end());
    int max = *max_element(nums.begin(), nums.end());
    int index = 0;

    vector<int> arr(max - min + 1);
    for (int i = 0; i < nums.size(); i++) {
        arr[nums[i] - min]++;
    }
    for (int i = 0; i < arr.size(); i++) {
        while (arr[i]-- > 0) {
            nums[index++] = min + i;
        }
    }
    return nums;
}

```