class Solution {
public:
    int maxPower(string s) {
        int count=1;
        int maxcount=1;
        for(int i=0;i<s.length()-1;i++){
            if(s[i]==s[i+1]){
                count++;
                maxcount=max(maxcount,count);
            }
            else count=1;
        }
        return maxcount;
    }
};
