class Solution {
public:
    int minMoves2(vector<int>& nums) 
    {
        int ans = 0;
        int ans2 = 0;
        int sum = 0;
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int med = nums[n/2];
        for(int i = 0; i<n;i++)
        {
            ans = abs(med - nums[i]);
            ans2 = ans2 + ans;
        }
        return ans2;
    }
};

// first we will find the median of array by sorting the array and than finding its middle element ;
// after finding median we have to substract each elemet from median and store it sum and return it 