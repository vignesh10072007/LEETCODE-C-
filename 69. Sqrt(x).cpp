class Solution {
public:
    int mySqrt(int x) {
        int l=1,h=x,ans=1;
        if(x==0) return 0;
        while(l<=h){
            int m=l+(h-l)/2;
            if(m==x/m) return m;
            else if(m>x/m) h=m-1;
            else{
                ans=m;
                l=m+1;
            }
        }
        return ans;
    }
};
