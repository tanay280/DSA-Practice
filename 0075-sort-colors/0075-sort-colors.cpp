class Solution {
public:
    void sortColors(vector<int>& nums) 
    {
        int cnz=0;
        int cno=0;
        int cnt=0;
        for(int i =0;i<nums.size();i++)
        {
            if(nums[i]==0) cnz++;
            if(nums[i]==1) cno++;
            if(nums[i]==2) cnt++;
        }
        for(int i=0;i<nums.size();i++)
        {
            if(i<cnz) nums[i]=0;
            else if(i<(cnz+cno)) nums[i]=1;
            else nums[i]=2;
        }
    return;
    }
};