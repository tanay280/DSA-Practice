class Solution {
public:
    string removeOuterParentheses(string s) 
    {
        int open = 0;
        string ans ="";
        for(int i =1; i<s.size();i++)
        {
            if(s[i] == '(')
            {
                ans.push_back(s[i]);
                open = open +1;
            }
            else
            {
                open = open -1;
                if(open <0)
                {
                    i= i+1;
                    open =0;
                }
                else
                {
                    ans.push_back(s[i]);
                }
            }
        }
        return ans;
    }
};