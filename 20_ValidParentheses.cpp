class Solution {
public:
    bool isValid(string s) 
	{
		//ʹ��һ��ջ������������ַ��������ַ�������Ҫ��ɨ��һ��
		vector<char> stack;
		for(int i=0;i<s.size();i++)
		{
			if(s[i]=='('||s[i]=='{'||s[i]=='[')
			{
				stack.push_back(s[i]);
			}
			else
			{
				if(stack.size()==0)
					return false;
				if(s[i]==')')
				{
					if(stack.back()!='(')
						return false;
					else
						stack.pop_back();
				}
				if(s[i]==']')
				{
					if(stack.back()!='[')
						return false;
					else
						stack.pop_back();
				}
				if(s[i]=='}')
				{
					if(stack.back()!='{')
						return false;
					else
						stack.pop_back();
				}
			}
		}
		//��֤���ŵĶ�Ӧ��ϵ���걸��
		if(stack.size()==0)
			return true;
		else
			return false;
    }
};