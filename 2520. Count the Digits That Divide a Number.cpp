class Solution {
public:
    int countDigits(int num) {
        int o=num,c=0;
        while(num>0){
            int d=num%10;
            if(o%d==0) c++;
            num/=10;
        }
        return c;
    }
};
