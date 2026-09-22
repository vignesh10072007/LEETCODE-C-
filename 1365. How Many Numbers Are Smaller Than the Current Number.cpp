class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> num1(nums.size());
        for(int i=0;i<nums.size();i++){
            int c=0;
            for(int j=0;j<nums.size();j++){
                if(nums[i]>nums[j]) c++;
            }
            num1[i]=c;
        }
        return num1;
    }
};
