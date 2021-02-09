# 题目
一只青蛙一次可以跳上1级台阶，也可以跳上2级……它也可以跳上n级。求该青蛙跳上一个n级的台阶总共有多少种跳法。

# 思路
| 方法 | 时间     | 空间 |
| 动态规划 | O(n^2) | O(n) |
| 化简版动态规划 | O(n) | O(1) |
int jumpFloorII(int n) {
     if (n == 0 || n == 1) return 1;
     return static_cast(pow(2, n-1));
}
