//Tips:输出数组中不重复的数字的个数，并将的前n位放不重复的n个数字
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
		if (nums.size()==0||nums.size()==1)
		{
			return nums.size();
		}
        int j=1;
		for(int i=1;i<nums.size();i++)
		{
			if(nums[i]!=nums[i-1]) nums[j++]=nums[i];
		}
		return j;
    }
};