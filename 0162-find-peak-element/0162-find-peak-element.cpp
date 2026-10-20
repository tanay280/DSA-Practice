class Solution {
public:
    int findPeakElement(vector<int>& nums) 
    {
        int n = nums.size();
        int m = *max_element(nums.begin(),nums.end());
        for(int i = 0; i<n;i++)
        {
            if(nums[i] == m)
            {
                return i;
            }
        }
        return -1;
    }
};