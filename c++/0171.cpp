class Solution {
public:
    int titleToNumber(string columnTitle) {
        int ans = 0;
        for(int chr : columnTitle){
            int b = chr - 'A' + 1 ;
            ans = ans * 26 + b;
        }
        return ans ;
    }
};
