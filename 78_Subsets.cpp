class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> tmp;
        dfs(nums,res,tmp,0);
        return res;
    }

    void dfs(vector<int>& nums,vector<vector<int>>& res,vector<int>& tmp,int lenth)
    {
        int size = nums.size();
        res.push_back(tmp);
        for(int i=lenth;i<size;i++)
        {
            tmp.push_back(nums[i]);
            dfs(nums,res,tmp,i+1);
            tmp.pop_back();
        }
        return;
    }
};