class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int size = prices.size();
        if(size<=1)
            return 0;
        vector<int> db(size,0);
        int res = 0;
        for(int i=1;i<size;i++)
        {
            db[i] = max(db[i-1]+(prices[i]-prices[i-1]),0);
            res = max(res,db[i]);
        }
        return res;
    }
};