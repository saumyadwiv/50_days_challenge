class Solution {
public:
    int titleToNumber(string columnTitle) {
        int col = 0;
        int n = columnTitle.length();

        for(int i=n-1; i>=0; i--)
        {
            col += ((columnTitle[i] - 'A' + 1) * pow(26, (n-i-1)));
        }

        return col;
        
        
    }
};
