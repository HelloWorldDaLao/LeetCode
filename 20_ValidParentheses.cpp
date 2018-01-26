class Solution {
public:
    bool isValid(string s) 
	{
		//使用一个栈来解析输入的字符串，将字符串按照要求扫描一遍
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
		//保证括号的对应关系是完备的
		if(stack.size()==0)
			return true;
		else
			return false;
    }
};