class Solution {
public:
    int longestValidParentheses(string s) {
        if(s.size()==0)
            return 0;
		int first=-1,res=0;
		stack<int> stack;
		for(int i=0;i<s.size();i++)
		{
			if(s[i]=='(')
				stack.push(i);
			else
			{
				if(stack.empty())
				{
					first=i;
				}
				else
				{
					stack.pop();
					if(stack.empty())
					{
						res=res>(i-first)?res:(i-first);
					}
					else
					{
						res=res>(i-stack.top())?res:(i-stack.top());
					}				
			    }
		    }
        }
        return res;
    }
};