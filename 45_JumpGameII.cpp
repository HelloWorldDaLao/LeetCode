class Solution {
public:
    int jump(vector<int>& nums) {
        int size = nums.size();
        if(size==1)
            return 0;
		int res = 0,current = 0;
		while(1)
		{
			int max = current,tmp = current;
			for(int i=1;i<=nums[current];i++)
			{
				if(current+i==size-1)
				{
					return res+1;
				}
				if(current+i+nums[current+i]>max)
				{
					max=current+i+nums[current+i];
					tmp=current+i;
				}
			}
			current=tmp;
			res++;
		}
    }
};