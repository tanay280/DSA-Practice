class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) 
    {
        int n = nums.size();
        vector<long long> squares;
        for (int x : nums) 
        {
            squares.push_back(1LL * x * x);
        }
        sort(squares.begin(), squares.end());
        long long sum = 0;
        int half = (n + 1) / 2;
        for (int i = 0; i < n; i++) 
        {
            if (i < half) 
            {
                sum = sum + squares[n - 1 - i];
            } 
            else 
            {
                sum = sum - squares[n - 1 - i];
            }
        }
        return sum;
    }
};