class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        if(timeSeries.empty())
            return 0;
        int res=0,lastEnd=timeSeries[0];
        for(auto time:timeSeries)
        {
            if(time>lastEnd)
            {
                res+=duration;
                lastEnd=time+duration;
            }
            else
            {
                res+=time+duration-lastEnd;
                lastEnd=time+duration;
            }
        }
        return res;
    }
};