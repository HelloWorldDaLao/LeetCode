class Solution {
public:
    bool canJump(vector<int>& nums) {
        int size = nums.size();
		int lastPosition = size-1;
		for(int i=size-1;i>=0;i--)
		{
			if (i+nums[i]>=lastPosition)
			{
				lastPosition=i;
			}
		}
        return lastPosition==0;
    }
};