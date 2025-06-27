class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;

        long long revX = revNum(x);
        return x == revX ;
    }

    int revNum(int n){
        long long revNum = 0;
        while(n!=0){
        int dig = n%10;
        revNum = revNum*10 + dig;
        n /= 10;
        }
    return revNum;
    }
};