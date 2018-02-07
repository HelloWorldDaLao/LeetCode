class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> res;
		vector<int> tmp;
		sort(candidates.begin(), candidates.end());
		dfs(res,tmp,candidates,target,0);
		return res;
    }
	int dfs(vector<vector<int>>& res,vector<int>& tmp,vector<int>& candidates,int target,int start)
	{
		if(target<0)
		{
			return 0;
		}
		if(target==0)
		{
			res.push_back(tmp);
			return 0;
		}
		for(int i=start; i<candidates.size(); i++)
		{
			//key作为树的枝减条件，当树搜索到正确的结果后，或者target为负后，就可以将右子树枝减掉
			int key;
            tmp.push_back(candidates[i]);
			key = dfs(res,tmp,candidates,target-candidates[i],i);
            tmp.pop_back();
			if (key == 0)
			{
				break;
			}
		}
		return 1;
	}
};