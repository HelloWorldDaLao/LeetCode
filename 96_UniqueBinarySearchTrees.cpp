class Solution {
public:
int numTrees(int n) {
	vector<int> db(n + 1, 0);
	db[1] = db[0] = 1;
	for (int i = 2; i <= n; i++)
	{
		for (int j = 0; j<i; j++)
		{
			db[i] += (db[j] * db[i - j - 1]);
		}
	}
	return db[n];
}
};