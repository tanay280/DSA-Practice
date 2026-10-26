class Solution {
public:
    int calculateMinimumHP(vector<vector<int>>& dungeon) 
    {
        int n = dungeon.size();
        int m = dungeon[0].size();
        vector<vector<int>> dp(n, vector<int>(m, 0));
        dp[n-1][m-1] = max(1, 1 - dungeon[n-1][m-1]);
        for(int i = n-2; i >= 0; i--)
        {
            int result = dp[i+1][m-1] - dungeon[i][m-1];
            dp[i][m-1] = max(1, result);
        }
        for(int j = m-2; j >= 0; j--)
        {
            int result = dp[n-1][j+1] - dungeon[n-1][j];
            dp[n-1][j] = max(1, result);
        }
        for(int i = n-2; i >= 0; i--)
        {
            for(int j = m-2; j >= 0; j--)
            {
                int a = dp[i][j+1];
                int b = dp[i+1][j];
                int min1 = min(a, b);
                int result = min1 - dungeon[i][j];
                dp[i][j] = max(1, result);
            }
        }
        return dp[0][0];
    }
};