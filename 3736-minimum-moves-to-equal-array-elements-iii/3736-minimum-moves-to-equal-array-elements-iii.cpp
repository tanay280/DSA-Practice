class Solution {
public:
    int minMoves(vector<int>& nums) 
    {
        int n = nums.size();
        int ans = 0;
        int ans2 = 0;
        int high = *max_element(nums.begin(),nums.end());
        for(int i = 0; i<n;i++)
        {
            ans = abs(high - nums[i]);
            ans2 = ans2 + ans;
        }
        return ans2;
    }
};