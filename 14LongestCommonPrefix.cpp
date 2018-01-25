class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) 
    {
        string tmp;
        if (strs.size()<=0)
        {
            return tmp;
        }
        string result = strs[0];
        for(int i = 0; i<strs.size(); i++)
        {
            tmp = tool(strs[0],strs[i]);
            result = result.size()<tmp.size()?result:tmp;
        }
        return result;
    }

    string tool(string& str1,string& str2)
    {
        string tmp;
        int loop = str1.size()<str2.size()?str1.size():str2.size();
        for(int i=0; i<loop; i++)
        {
            if(str1.at(i)==str2.at(i))
            {
                tmp.append(1,str1.at(i));
            }
            else
            {
                return tmp;
            }
        }
        return tmp;
    }
};