class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int> num1(nums.size());
        for(int i=0;i<nums.size();i++){
            num1[i]=nums[nums[i]];
        }
        return num1;
    }
};
