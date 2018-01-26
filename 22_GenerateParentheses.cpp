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
	//���ﴫ��vectorһ��Ҫ����ַ���������޸�vector
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
		//���ݵ������������ŵĸ�����n��ͬ�ˣ������ұߵ����Ÿ���������ߵ����Ÿ���
		//�����ϸ����������ֱ��֦������ȥ����
        return;
	}
};