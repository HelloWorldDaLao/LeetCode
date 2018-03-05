class Solution {
public:
    int rob(vector<int>& nums) {
        int size = nums.size();
        vector<int> dp1(size+1,0),dp2(size+1,0);
        for(int i=0;i<size;i++)
        {
            dp1[i+1]=max(dp1[i],dp2[i]);
            dp2[i+1]=dp1[i]+nums[i];
        }
        return max(dp1[size],dp2[size]);
    }
};