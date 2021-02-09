class Solution {
public:
     int  NumberOf1(int n) {
         int count = 0;
         int mask = 0x01;
         while (mask != 0)
         {
             if (mask & n) ++count;
             mask <<= 1;
         }
         return count;
     }