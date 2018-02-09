class Solution {
public:
    int trap(vector<int>& height) {
        int res = 0;
		int size = height.size();
        if(size<3)
        {
            return 0;    
        }
	//ʹ�ö�̬�滮�㷨���������������ڱ���ĳ��λ�������Ҳ����߸߶�
        vector<int> leftMax(size),rightMax(size);
	leftMax[0] = height[0];
	for (int i=1; i<size-1; i++)
	{
		leftMax[i] = max(leftMax[i-1],height[i]);
	}
	rightMax[size-1] = height[size-1];
	for (int i=size-2; i>0; i--)
	{
		rightMax[i] = max(rightMax[i+1],height[i]);
	}
	for (int i=1; i<size-1; i++)
	{
		res+=min(rightMax[i],leftMax[i])-height[i];
	}
	return res;
    }
};
