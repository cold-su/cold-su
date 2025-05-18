# 15. Dynamic Programming, Part 1: SRTBOT, Fib, DAGs, Bowling

## intro

- SRTBOT

the very first thing that we come along with a problem which is likely a dp

which means sub-problems, relations, topological order, base case, original problem, and time analysis

- DP

recursion + memorization

## Fibonacci

### give a quick look

F(n) = F(n - 1) + F(n - 2)

- Subproblems: F(i), 1 <= i <= n

- Relations: F(i) = F(i - 1) + F(i - 2)

- Topological order: increasing i

- Base case F(1) = F(2) = 1

- Original problem: F(n)

- Time analysis: T(n) = T(n - 1) + T(n - 2) + 1

### big idea: Memorization

- rememer and reuse solutions to subprolems

- maintain a dictionary mapping subproblems

- if a subproblem is computed, use the stroed soluton

- if not, compute and store it

加上记忆化之后的递归树看起来就只延申左边，因为归的时候另外一个递归调用已经被计算过了，会立即返回先前保存的结果

每个子问题只会计算一次，而一共有 n 个子问题，其中有两个问题是不需要计算的，F(1) 和 F(2)

那么总的时间复杂度就是 O(n) 的

## DAG 最短路

- subproblems: S(s, v) for each v

- relate: S(s, v) = min{S(s, u) + w(u, v)  | u 属于 Adj-(v)} 并 {无穷大}

Adj-(v) 是指 v 的邻接入边的点

- topo: topo order of G

- base case: S(s, s) = 0

- Original: all subprolems

- time: \sigma O(1 + |adj-(v)|) = O(|V| + |E|)

## bowling

max(a[i] + suf[i + 1], a[i] * a[i + 1] + suf[i + 2], 0 + suf[i + 1])

suf[n] = 0