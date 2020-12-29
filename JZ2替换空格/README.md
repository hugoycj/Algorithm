# 题目
请实现一个函数，将一个字符串中的每个空格替换成“%20”。例如，当字符串为We Are Happy.则经过替换之后的字符串为We%20Are%20Happy。

# 模板
class Solution {
public:
	void replaceSpace(char *str,int length) {

	}
};

# 思路
## 1. 逆向遍历
分析：由于函数返回为void，说明此题不能另外**开辟数组**，需要in-place操作。我们知道字符串的遍历无非是从左到右和从右到左两种。
1）如果从左到右，会发现如果遇到空格，会将原来的字符覆盖。于是，此方法不行。
2）那么就考虑从右向左，遇到空格，就填充“20%“，否则将原字符移动应该呆的位置。


具体过程:
1. length为原字符串最后一个字符的位置，new_lngth为结果字符串的最后一个位置
2.  如果str[length]不等于空格，就复制，然后指针分别左移一位。
    如果str[length]等于空格，就填充“20%”
3.  一直进行上述步骤，直到字符串遍历完毕

答案:
```
class Solution {
public:
 void replaceSpace(char *str,int length) {
     if (str == nullptr || length <= 0) return; // 养成良好习惯，判空操作
     int cnt = 0;  // 空格的个数
     for (int i=0; i != length; ++i) {
         if (str[i] == ' ') ++cnt;
     }
     if (!cnt) return; // 没有空格，直接返回
     int new_length = length+cnt*2;
     for (int i=length; i >= 0; --i) {
         if (str[i] == ' ') {
             str[new_length--] = '0';
             str[new_length--] = '2';
             str[new_length--] = '%';
         }
         else {
             str[new_length--] = str[i];
         }
     }
 }
};


```

## 2. 直接用string
思路:
先转为string,然后处理完成后再转为char *。但不是以返回值的形式，还要利用好原来的空间，用strcpy实现之。

答案:
#include <string>
class Solution {
public:
	void replaceSpace(char *str,int length) {
        std::string s;
        std::string input = str;
        for (char x : input)
        {
            if (x == ' ') s += "%20";
            else s += x;
        }
        strcpy(str, s.c_str());
        return;
	}
};