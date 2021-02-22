# 题目
给定一个double类型的浮点数base和int类型的整数exponent。求base的exponent次方。

保证base和exponent不同时为0

# 思路
| 方法 | 时间     | 空间 |
| 递归法（快速幂） | O(nlogn) | O(nlogn) |
| **非递归的快速幂** |        |          |

## 非递归的快速幂 (STL标准库做法)
假设求X^6 ,已知6可以表示成二进制110
可以表示成 6 = 0\*2^0 + 1\*2^1 + ... ,所以
x^6
可以表示成
x^(0\*2^0 + 1\*2^1 + ...)


class Solution {
public:
 
    double Power(double b, int n) {
        if (n < 0) {
            b = 1 / b;
            n = -n;
        }
        double x = b; // 记录x^0, x^1, x^2 ...
        double ret = 1.0;
        while (n) {
            if (n&1) {
                ret *= x; // 二进制位数是1的，乘进答案。
            }
            x *= x;
            n >>= 1;
        }
        return ret;
    }
};