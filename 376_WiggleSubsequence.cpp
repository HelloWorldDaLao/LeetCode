class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) {
        int p=1,q=1;
        if(nums.size()==0)
            return 0;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]>nums[i-1])
                p=q+1;
            else if(nums[i]<nums[i-1])
                q=p+1;
        }
        return max(p,q);
    }
};