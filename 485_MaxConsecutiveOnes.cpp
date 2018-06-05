class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int res=0,tmp=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==1)
            {
                tmp++;
                res=max(res,tmp);
            }
            else
            {
                tmp=0;
            }
        }
        return res;
    }
};
