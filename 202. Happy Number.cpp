class Solution {
public:
    int getnumber(int n){
        int sum=0;
        while(n>0){
            int d=n%10;
            sum+=d*d;
            n/=10;
        }
        return sum;
    }
    bool isHappy(int n){
        int slow=n;
        int fast=getnumber(n);

        while(fast!=1 && slow!=fast){
            slow=getnumber(slow);
            fast=getnumber(getnumber(fast));
        }
        return fast==1;
    }
};
