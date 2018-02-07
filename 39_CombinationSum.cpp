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
			//key��Ϊ����֦��������������������ȷ�Ľ���󣬻���targetΪ���󣬾Ϳ��Խ�������֦����
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