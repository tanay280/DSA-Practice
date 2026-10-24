class Solution {
public:
    int minimumRecolors(string blocks, int k) 
    {
        int n = blocks.size();
        int ans = 0;
        int count = 0;
        for (int i = 0; i < k; i++) 
        {
            if (blocks[i] == 'W') 
            {
                count++;
            }
        }
        ans = count;
        for (int i = k; i < n; i++) 
        {
            if (blocks[i - k] == 'W') 
            {
                count--;
            }

            if (blocks[i] == 'W') 
            {
                count++;
            }
            ans = min(ans, count);
        }
        return ans;
    }
};