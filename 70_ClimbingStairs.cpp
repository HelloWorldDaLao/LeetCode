class Solution {
public:
    int climbStairs(int n) {
        if(n==1)
            return 1;
        vector<int> db(n,0);
        db[0]=1;
        db[1]=2;
        for(int i=2;i<n;i++)
        {
            db[i]=db[i-1]+db[i-2];
        }
        return db[n-1];
    }
};