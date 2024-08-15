#include <bits/stdc++.h>
using namespace std;
const static auto initialize = [] {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    return nullptr;
}();

int main(void) {
    vector<int> nums;
    int min = *min_element(nums.begin(), nums.end());
    int max = *max_element(nums.begin(), nums.end());

    vector<int> arr(max - min + 1);
    for (int i = 0; i < nums.size(); i++)
        arr[nums[i] - min]++;

    int c = 0;
    for (int j = 0; j < arr.size(); j++)
        while (arr[j]-- > 0)
            nums[c++] = j + min;

    return 0;
}
int countingSort(vector<int>& nums) {
    int min = *min_element(nums.begin(), nums.end());
    int max = *max_element(nums.begin(), nums.end());
    int c = 0;

    vector<int> arr(max - min + 1);
    for (int i = 0; i < nums.size(); i++) {
        arr[nums[i] - min]++;
    }
    for (int j = 0; j < arr.size(); j++) {
        while (arr[j]-- > 0) {
            nums[c++] = j + min;
        }
    }
    return nums;
}