class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int arr[256] = {0};

        int left = 0, ans = 0;

        for (int right = 0; right < n; right++) {
            while (arr[s[right]] == 1) {
                arr[s[left]] = 0;
                left++;
            }

            arr[s[right]] = 1;

            ans = max(ans, right - left + 1);
        }

        return ans;
    }
};