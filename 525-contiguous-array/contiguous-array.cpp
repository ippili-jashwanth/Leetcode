class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int, int> mp;

        // Prefix sum 0 before the array starts
        mp[0] = -1;

        int sum = 0;
        int maxi = 0;

        for (int i = 0; i < nums.size(); i++) {

            // Convert 0 to -1
            if (nums[i] == 0)
                sum--;
            else
                sum++;

            // Same prefix sum found
            if (mp.find(sum) != mp.end()) {
                maxi = max(maxi, i - mp[sum]);
            }
            else {
                // Store only the first occurrence
                mp[sum] = i;
            }
        }

        return maxi;
    }
};