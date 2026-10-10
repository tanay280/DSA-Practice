class Solution {
public:
    long long minSumSquareDiff(vector<int>& nums1, vector<int>& nums2, int k1, int k2) {
        int n = nums1.size();
        long long k = (long long)k1 + k2;
        vector<int> arr(n);

        for (int i = 0; i < n; i++) {
            arr[i] = abs(nums1[i] - nums2[i]);
        }

        sort(arr.begin(), arr.end(), greater<int>());

        int low = 0, high = arr[0];

        while (low < high) {
            int mid = low + (high - low) / 2;
            long long need = 0;

           for (int i = 0; i < arr.size(); i++) 
            {
                if (arr[i] > mid) 
                {
                    need += arr[i] - mid;
                }
            }

            if (need <= k)
                high = mid;
            else
                low = mid + 1;
        }

        long long used = 0;
        long long ans = 0;

        for (int i = 0; i < n; i++) {
            if (arr[i] > low) {
                used += arr[i] - low;
                arr[i] = low;
            }
            ans += 1LL * arr[i] * arr[i];
        }

        long long remaining = k - used;

        for (int i = 0; i < n && remaining > 0; i++) {
            if (arr[i] == low && low > 0) {
                ans -= 2LL * low - 1;
                arr[i]--;
                remaining--;
            }
        }

        return ans;
    }
};