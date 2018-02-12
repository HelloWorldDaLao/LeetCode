class Solution {
public:
    	vector<vector<int>> permute(vector<int>& nums) 
	{
        	vector<vector<int>> res;
		dfs(res,nums,0);
        	return res;
    	}
	void dfs(vector<vector<int>>& res,vector<int>& nums,int depth)
	{
		if(depth==nums.size())
		{
			res.push_back(nums);
			return;
		}
		//ʹ�ý���Ԫ��ʵ��ȫ����
		for(int i=depth;i<nums.size();i++)
		{
			swap(nums[depth],nums[i]);
			dfs(res,nums,depth+1);
			swap(nums[depth],nums[i]);
		}
	        return;
	}
};
