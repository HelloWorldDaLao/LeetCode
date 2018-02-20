class Solution {
public:
    void sortColors(vector<int>& nums) {
        int blue = nums.size()-1;
        int red = 0;
        for(int i=0;i<=blue;i++)
        {
            if(nums[i]==0)
            {
                swap(nums[red++],nums[i]);
            }
            else if(nums[i]==2)
            {
                swap(nums[blue--],nums[i--]);
            }
        }
    }
};