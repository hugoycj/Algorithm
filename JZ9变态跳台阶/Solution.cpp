class Solution {
public:
    int jumpFloorII(int number) {
        vector<int> v(number+1, 0);
        v[0] = v[1] = 1;
        for (int i = 2; i <= number; i++)
            // v[i] = 1 + v[i-1] * v[1] + v[i-2] * v[2] + ... + v[1] * v[i-1]
            for (int j = 0; j < i; j++ )
                v[i] += v[j];
        return v[number];
    }
};