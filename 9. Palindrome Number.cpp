class Solution {
public:
    bool isPalindrome(int x) {
        int o=x,rev=0;
        if(x<0) return false;
        while(x!=0){
            int d=x%10;
            x/=10;
            if(rev>INT_MAX/10||rev<INT_MIN/10) return 0;
            rev=rev*10+d;
        }
        if(rev==o) return true;
        else return false;
    }
};
