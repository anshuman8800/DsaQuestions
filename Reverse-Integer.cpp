class Solution {
public:
    int reverse(int x) {
        int s=0;
        while(x!=0)
        {
           int  pop=x%10;
            x=x/10;
            if(s>INT_MAX/10 || (s==INT_MAX/10 && pop>7))return 0;
            if(s<INT_MIN/10 || (s==INT_MIN/10 && pop<-8))return 0;
            s=s*10+pop;
        }
        return s;
    }
};
