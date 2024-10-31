# Notes

```cpp
// https://www.luogu.com.cn/article/e6r2knir
// 模拟退火
#include<bits/stdc++.h>
#define MAXN 40 //第一次把MAXN看成20，结果WA了20分orz
#define Tk 0.99789 //降温系数，可调，调得好可上天入地
#define rd (rand() % n + 1)
using namespace std;

int v[MAXN];
int V, n, ans = 0, tot = 0;
bool vis[MAXN];
double T = 1926; //初温，大部分模拟退火用这个初温都能AC

bool accept(int del) {
    return ((del>0)||exp(del/T) > (double)rand()/RAND_MAX);
} //转移概率表达式

int main() {
    srand(time(0));
    scanf("%d%d", &V ,&n);
    for(int i=1; i<=n; i++) 
        scanf("%d", &v[i]);
    int a;
    memset(vis, 0, sizeof(vis));
    while(T > 1e-14) {
        ans = ans<tot ? tot : ans; //维护最优答案，以防非酋情况发生
        a = rd; //进行随机
        int dE = v[a];
        if(vis[a]) dE *= -1; //产生能量差
        if(accept(dE)) { //以概率发生转移
            if(vis[a]) {
                vis[a] = false;
                tot -= v[a];
            }else{
                if(tot + v[a] > V) continue;
                vis[a] = true;
                tot += v[a];
            }
        }
        T *= Tk; //降温
    }
    cout << V - ans;
    return 0;
}

```

```cpp
// 力扣的链表实现
typedef struct ListNode {
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
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