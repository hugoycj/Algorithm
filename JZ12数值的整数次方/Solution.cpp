class Solution {
public:
    double Power(double base, int exponent) {
        if (base == 0 || base == 1)
            return base;
        if (exponent == 0)
            return 1.0;
        double result = base;
        int sign = 1;
        
        if (exponent < 0)
            sign = -1;
        int twice_multi = exponent / 2;
        twice_multi *= sign;
        int single_multi =  exponent % 2;
        single_multi *= sign;

        
        for (twice_multi ; twice_multi > 0; twice_multi--)
            result *= result;
        if (single_multi)
            result *= base;
          
        if (exponent < 0)
            return 1 / result;
        else
            return result;
    }
};