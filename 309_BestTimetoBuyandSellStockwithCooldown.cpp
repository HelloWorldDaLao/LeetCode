class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int size = prices.size();
        vector<int> maxIncome(size+2,0);
        vector<int> buy(size+2,0);
        buy[1]=INT_MIN;
        for(int i=0;i<size;i++)
        {
            buy[i+2]=max(buy[i+1],maxIncome[i]-prices[i]);
            maxIncome[i+2]=max(buy[i+1]+prices[i],maxIncome[i+1]);
        }
        return maxIncome[size+1];
    }
};