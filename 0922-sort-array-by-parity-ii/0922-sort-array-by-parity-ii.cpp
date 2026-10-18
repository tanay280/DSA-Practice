class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) 
    {
        int n = nums.size();
        vector<int> ans(n);
        int odd = 1;
        int even = 0;
        for(int i = 0;i<n;i++)
        {
            if(nums[i] % 2 != 0)
            {
                ans[odd] = nums[i];
                odd = odd + 2;
            }
            else
            {
                ans[even] = nums[i];
                even = even + 2;
            }
        }
        return ans;
    }
};