class Solution {
public:
    bool canPartition(vector<int>& nums)
    {
        int n = nums.size();
        int m = 0;
        for(int i = 0; i < n; i++)
        {
            m = m + nums[i];
        }
        if(m % 2 != 0)
        {
            return false;
        }
        int target = m / 2;
        vector<vector<bool>> dp(n + 1, vector<bool>(target + 1, false));
        for(int i = 0; i <= n; i++)
        {
            dp[i][0] = true;
        }
        for(int i = 1; i <= n; i++)
        {
            for(int j = 1; j <= target; j++)
            {
                bool not_taken = dp[i - 1][j];
                bool taken = false;
                if(nums[i - 1] <= j)
                {
                    taken = dp[i - 1][j - nums[i - 1]];
                }
                dp[i][j] = taken || not_taken;
            }
        }
        return dp[n][target];
    }
};
