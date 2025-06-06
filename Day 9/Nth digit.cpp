class Solution {
public:
    int findNthDigit(int n) {

        long digitInNum = 1, start = 1, end = 9;

        while (n > digitInNum * end) {
            n -= digitInNum * end;
            digitInNum++;
            start *= 10;
            end *= 10;
        }

        long num = start + (n - 1) / digitInNum;
        string numStr = to_string(num);
        return numStr[(n - 1) % digitInNum] - '0';
        
    }
};
