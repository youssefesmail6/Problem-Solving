class Solution {
public:
    int reverse(int x) {
        int digit;
        long long reverse=0;
        int INT_MAX=2147483647;
        int INT_MIN=-2147483648;
    
        while (x!=0)
        {
        digit =x%10;
        reverse= reverse*10+digit;
        if (reverse > INT_MAX || reverse < INT_MIN)
                return 0;
        x=x/10;
        }
        return (int)reverse;

    };
};