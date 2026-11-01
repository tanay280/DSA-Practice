class Solution {
public:
    int minMoves(vector<int>& nums) 
    {
        int n = nums.size();
        int ans = 0;
        int m = *min_element(nums.begin(),nums.end());
        for(int i = 0; i<n;i++)
        {
            ans = ans + (nums[i] - m);
        }
        return ans;
    }
};

// logic
// we will find min element of array;
// then we will substract it from each element of array and store it in ans 
// we will add all this ans and return ans