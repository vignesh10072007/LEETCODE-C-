class Solution {
public:
    int thirdMax(vector<int>& nums) {
        long fm=LONG_MIN;
        long sm=LONG_MIN;
        long tm=LONG_MIN;
        for(int num:nums){
            if(num==fm||num==sm||num==tm) continue;
            if(num>fm){ 
            tm=sm;
            sm=fm;
            fm=num;
            }
            else if(num>sm){
                tm=sm;
                sm=num;
            }
            else if(num>tm){
                tm=num;
            }
        }
        if(tm==LONG_MIN) return fm;
        return tm;
    }
};
