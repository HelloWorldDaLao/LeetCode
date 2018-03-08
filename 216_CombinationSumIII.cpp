class Solution {
public:
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> res;
		vector<int> tmp;
		dfs(res,tmp,k,n,1);
		return res;
    }
	void dfs(vector<vector<int>>& res,vector<int>& tmp,int k,int n,int min)
	{
		if(k==0&&n==0)
		{
			res.push_back(tmp);
			return;
		}
		//无法完成条件，进行枝减
		if(k==0||n<=k||min>n)
			return;
		for(int i=min;i<=9;i++)
		{
			tmp.push_back(i);
			dfs(res,tmp,k-1,n-i,i+1);
			tmp.pop_back();
		}
		return;
	}
};