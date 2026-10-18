class Solution {
public:
    int singleNumber(vector<int>& nums) 
    {
        int n = nums.size();
        int m = 0;
        for(int i= 0; i<n;i++)
        {
            m = nums[i]^m;
        }
        return m;
    }
};