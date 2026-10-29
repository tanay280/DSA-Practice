class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) 
    {
        int n = text1.size();
        int m = text2.size();
        // dp[i][j] == the longest subsequence from both the string , when we considering first ith char from string 1 and first jth char from string 2;
        vector<vector<int>>dp(n+1,vector<int>(m+1,0));
        for(int i = 1; i<=n;i++)
        {
            for(int j = 1 ; j<=m;j++)
            {
                if(text1[i-1] == text2[j-1])
                {
                    dp[i][j] = 1 + dp[i-1][j-1];
                }
                else
                {
                    int a = dp[i-1][j];
                    int b = dp[i][j-1];
                    dp[i][j] = max(a,b);
                }
            }
        }
        return dp[n][m];
    }
};