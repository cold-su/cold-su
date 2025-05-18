# 16. Dynamic Programming, Part 2: LCS, LIS, Coins

## lcs

给定两个字符串, 找出最长公共子序列.

*H*I*E*ROG*L*YPHO*L**O*GY   
MIC*H*A*E**L*ANGE*L**O*     

-> *HELLO*

### 处理多重输入的技巧

将子问题占用的空间翻倍. 即 A 的子问题与 B 的子问题组合.

LCS 的子问题, 对于 `0 <= i <= n` 和 `0 <= j <= n`, 找到 A[i:] 和 B[j:] 的最长公共子序列.

显然, base case 是 A[n:] 和 B[n:], 这两个字符串都是空的, 那么答案为 0.

### relate

定义 L(i, j) 是 `A[i] + A[i + 1] + ... + A[n - 1]` 与 `B[j] + B[j + 1] + ... + B[m - 1]` 的最长公共子序列

L(i, j) = if A[i] == B[i]:   `L(i + 1, j + 1) + 1`
          else:              `max{ L(i + 1, j), L(i, j + 1) }`

## 拓扑序

n 和 m 是对应字符串的大小.

`for i = n, n - 1, ..., 0` and `for j = m, m - 1, ..., 0`.

### base case

L(n, j) = 0,        无论 j 的值是什么, 因为另外一个字符串是空的, 所以答案为 0.

类似地, L(i, m) = 0, ... i ...

### original problem

L(0, 0)

parent pointers to find LCS

### time

O(n * m) 个子问题 * O(1) 的判断 == O(n * m) 时间复杂发

## lis 最长递增子序列

given string s, find LIS(s)

### subprob

L(i) == LIS of a[i], a[i + 1], ..., a[n - 1];

### relate

`L(i) = 1 + max{ L(j) for i < j <= n, a[i] < a[j] } ^ {0}`

### topo

for i = n downto 0

### base case

L(n) == 0 因为*空集*的 LIS 显然是 0.

### original prob

max{ L(i) for 0 <= i <= n }

### time

O(n) 个子问题 * 最坏下 O(n) 次遍历 + O(n) 次加法 == O(n^2)


## Alternating Coin game 取硬币游戏

给定一个硬币序列 a[0], a[1], ..., a[n - 1], 双方轮换选择这个序列的第一项或最后一项, 然后把选择的那一项删除.

问题是最大化某个人的收益

### subprobs

X(i, j, p) == 当前是玩家 p 的回合时, *我*能从 a[i], a[i + 1], ..., a[j] 中获得的最大利益

### relate

Q: What is first move?

X(i, j, me):   _max_{ X(i + 1, j, you) + a[i], X(i, j - 1, you) + a[j] } *当前是我的回合时, 我可以获得收益*

X(i, j, you):  _min_{ X(i + 1, j, me), X(i, j - 1, me) } *当前是别人的回合时, 我并不能获得任何收益*

#### 解释

X(i, j, p) 中定义的收益是*我*的, 显然*我*不可能在*别人*的回合里面拿到钱

当 *you* 选择了 a[i] 时, 他的收益是 `a[i] + X(i + 1, j, me)`

这时*我*的收益依然是`X(i + 1, j, me)`

当 *you* 选择了 a[j] 时, 他的收益是 `a[j] + X(i, j - 1, me)`

这时*我*的收益依然是`X(i, j - 1, me)`

当然, *我*想要最小化他的收益, 这样子我的收益就会尽可能的大

如果 `a[i] + X(i + 1, j, me)` 更小, 那么这种情况对我而言是更优的, 则此时我的收益是 `X(i + 1, j, me)`

如果 `a[j] + X(i, j - 1, me)` 更小, 那么这种情况对我而言是更优的, 则此时我的收益是 `X(i, j - 1, me)`

定义 `him(i, j)` 是他从 a[i], a[i + 1], ..., a[j] 中获得的最大收益

定义 `me(i, j)` 是我从 a[i], a[i + 1], ..., a[j] 中获得的最大收益

我希望:

`you(i, j) = min(a[i] + me(i + 1, j), a[j] + me(i, j - 1))`

`me(i, j) = max(a[i] + you(i + 1, j), a[j] + you(i j - 1)`

从上面临时定义的式子中可知, 要想最小化他的收益, `X(i, j, you)` 总是取 `X(i + 1, j, me)` 和 `X(i, j - 1, me)` 的较小值

因为当我取到了这两个的较小值*意味着他拿到了更小的收益*

### topo

increasing len == j - i

### base case

X(i, i, me) = a[i] *当前是我的回合时, 我可以获得收益*

X(i, i, you) = 0   *当前是别人的回合时, 我并不能获得任何收益*

### Original problem

X(0, n, me)

### time

O(n^2)