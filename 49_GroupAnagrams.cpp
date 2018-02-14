class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> res;
	unordered_map<string,vector<string>> hash;
	for(auto str:strs)
	{
		string tmp = str;
		sort(tmp.begin(),tmp.end());
		hash[tmp].push_back(str);
	}
	for(auto a:hash)
	{
		res.push_back(a.second);
	}
	return res;
    }
};
