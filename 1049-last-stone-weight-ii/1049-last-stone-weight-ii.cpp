class Solution {
public:
    int lastStoneWeightII(vector<int>& stones) 
    {
        int  n = stones.size();
        int m = 0;
        for(int i = 0; i<n;i++)
        {
            m = m + stones[i];
        }
        vector<vector<bool>> dp(n+1, vector<bool>(m+1,false));
        for(int i = 0 ; i<= n;i++)
        {
            dp[i][0] = true;
        }
        for(int i = 1; i<=n;i++)
        {
            for(int j= 1; j<= m; j++)
            {
                int not_taken = dp[i-1][j];
                int taken = false;
                if(stones[i-1] <= j)
                {
                    taken = dp[i-1][j-stones[i-1]];
                }
                dp[i][j] = taken || not_taken;
            }
        }
        int result = INT_MAX;
        for(int i = m / 2; i >= 0; i--)
        {
            if(dp[n][i] == true)
            {
                return m - 2 * i;
            }
        }
        return result;
    }
};