class Solution {
public:
    int jump(vector<int>& nums) 
    {
        int n = nums.size();
        int ans = 0;
        int end = 0;
        int starting = 0;
        for(int i = 0;i<n-1;i++)
        {
            starting = max(starting, i+nums[i]);
            if(i == end )
            {
                ans++;
                end = starting;
            }
        }
        return ans;
    }
};