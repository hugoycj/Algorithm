#include <string>
class Solution {
public:
	void replaceSpace(char *str,int length) {
        if (str == nullptr || length <= 0) return;
        // Count how much block
        int block = 0;
        for (int i = 0; i != length; i++)
        {
            if (str[i] == ' ') block++;
        }
        
        // Get new length
        int new_length = length + block*2;
        for (int i = length; i >= 0; --i)
        {
            if (str[i] == ' ')
            {
                str[new_length--] = '0';
                str[new_length--] = '2';
                str[new_length--] = '%';
            }
            else
            {
                str[new_length--] = str[i];
            }
        }
        return;
	}
};
