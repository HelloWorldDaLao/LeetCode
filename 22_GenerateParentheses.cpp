class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> res;
		if(n==0) return res;
        int left=0,right=0;
		string str;
		dfs(&res,str,left,right,n);
		return res;
    }
	//这里传递vector一定要传地址，否则不能修改vector
	void dfs(vector<string> *res,string str,int left,int right,int n)
	{
		if(right==n)
		{
			res->push_back(str);
			return;	
		}
		if(left<n)
			dfs(res,str+"(",left+1,right,n);
		if(right<left)
			dfs(res,str+")",left,right+1,n);
		//回溯的条件是左括号的个数与n相同了，或者右边的括号个数等于左边的括号个数
		//不符合该条件的情况直接枝减掉不去处理
        return;
	}
};