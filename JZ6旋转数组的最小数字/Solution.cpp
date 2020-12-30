class Solution {
public:
    int minNumberInRotateArray(vector<int> rotateArray) {
        if (rotateArray.size() == 0) return 0;
        int first = 0, last = rotateArray.size() - 1;
        while (first < last)
        {
            // Compare first and last
            if (rotateArray[first] < rotateArray[last])
                return rotateArray[first];
            else
            {
                //int mid = (first + last) / 2;
                int mid = first + ((last - first) >> 1);
                if (rotateArray[mid] > rotateArray[last])
                    first = mid+1; // 情况1
                else if(rotateArray[mid] < rotateArray[last])
                    last = mid; // 情况2
                else
                    return rotateArray[mid]; // 情况3
            }
        }
        return rotateArray[first];
    }
};