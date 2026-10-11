class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) 
    {
        int n = nums.size();
        set<vector<int>> ttt;
        vector<int> temp;
        sort(nums.begin(), nums.end());
        for(int i = 0; i<n;i++)
        {
            int j = i+1;
            int k = n-1;
            while(j<k)
            {
                if(nums[i] + nums[j] + nums[k] == 0)
                {
                    temp.push_back(nums[i]);
                    temp.push_back(nums[j]);
                    temp.push_back(nums[k]);
                    sort(temp.begin(),temp.end());
                    ttt.insert(temp);
                    temp.clear();
                    j++;
                    k--;
                }
                else if(nums[i] + nums[j] + nums[k] < 0)
                {
                    j++;
                }
                else
                {
                    k--;
                }
            }
        }
        vector<vector<int>> ans(ttt.begin(),ttt.end());
        return ans;
    }
};