class Solution {
public:
    int jump(vector<int>& nums) {
        int size = nums.size();
        if(size==1)
            return 0;
	int res = 0,current = 0;
	//res存放已走的步数，current是当前所在的位置，max是当前位置后2步能到达的最大位置，tmp是存放下一次跳的位置
	//每次跳像后思考2步，以后2步的最远距离的贪心解来解题
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
