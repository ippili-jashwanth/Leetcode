class Solution {
public:
    int climbStairs(int n) {
        vector<int> dp(n + 1, -1);

        function<int(int)> solve = [&](int n) {
            if (n <= 2)
                return n;

            if (dp[n] != -1)
                return dp[n];

            return dp[n] = solve(n - 1) + solve(n - 2);
        };

        return solve(n);
    }
};