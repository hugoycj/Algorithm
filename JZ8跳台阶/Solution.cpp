class Solution {
public:
    int jumpFloor(int number) {
        if (number == 0) return 0;
        if (number == 1) return 1;
        vector<int> matrix(number+1, 0);
        matrix[0] = 1;
        matrix[1] = 1;
        for (int i = 2; i <= number; i++)
        {
            matrix[i] = matrix[i-1] + matrix[i-2];
        }
        return matrix[number];
    }
};