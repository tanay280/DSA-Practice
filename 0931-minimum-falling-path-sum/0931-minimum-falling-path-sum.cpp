class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) 
    {
        int n = matrix.size();
        vector<vector<int>> dp(n ,vector<int>(n,0));
        for(int i = 0; i<n;i++)
        {
            dp[0][i] = matrix[0][i];
        }
        for(int i = 1; i<n;i++)
        {
            for( int j = 0; j<n ; j++)
            {
                int a = matrix[i][j] + dp[i-1][j];
                int b = INT_MAX;
                int c = INT_MAX;
                if (j > 0) // when j = 0 than we do j-1 it goes out of bound 
                {
                    b = matrix[i][j] + dp[i-1][j-1];
                }
                if (j < n-1) // when j = n-1 than we do j+1 it goes out of bound
                {
                    c = matrix[i][j] + dp[i-1][j+1];
                }
                int mini1 = min(a, b);
                int mini2 = min(mini1, c);
                dp[i][j] = mini2;
            }
        }
        int mini = *min_element(dp[n-1].begin(), dp[n-1].end());
        return mini;
    }
};