# Notes

```cpp
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

// 模板
#include <bits/stdc++.h>
using namespace std;
const static auto initialize = [] {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    return nullptr;
}();

// 二分搜索 其一
// 第三个参数有点类似于cmp，以后再补充
int binarySearch(int left, int right, std::function<bool(int)> match) {
    while (left <= right) {
        int mid = left + (right - left) / 2;// 如此处理可以防止溢出
        if (match(mid)) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return left - 1;
}

// 计数排序
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

// dfs 其一
void dfs(TreeNode* root, int level) {
    if (!root) {
        return;
    }
    if (level == max_level) {
        sum += root->val;
    }
    if (level > max_level) {
        max_level = level;
        sum = root->val;
    }
    dfs(root->left, level + 1);
    dfs(root->right, level + 1);
}

// 快读
void read(int &x) {
    char c;
    do {
        c = getchar();
    } while (c == ' ' || c == '\n');
    x = 0;
    int w = 1;
    if (c == '-') {
        w = -1;
        c = getchar();
    }
    do {
        x = (x << 1) + (x << 3) + c - '0';
        c = getchar();
    } while (c != ' ' && c != '\n');
    x *= w;
}

```