class Solution {
public:
    bool isPalindrome(int x) {
        long rev = 0;
        int n = x;
        do
        {
            int digit = x % 10;
            rev = (rev * 10) + digit;
            x = x / 10;
        } while (x != 0);
        if(n == rev && n>=0){
            return true;
        }
        
        return false;
    }
};
