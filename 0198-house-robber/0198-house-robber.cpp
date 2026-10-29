class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        // dp[i] = maximum money he can rob from i to n houses by alternating them.
        vector<int> dp(n + 2, 0);

        for (int i = n - 1; i >= 0; i--) {
            int rob = nums[i] + dp[i + 2];
            int skip = dp[i + 1];

            dp[i] = max(rob, skip);
        }

        return dp[0];
    }
};