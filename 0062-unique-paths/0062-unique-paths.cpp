class Solution {
public:
    //Using Maths 
    long long int calculateCombination(int n, int k) {
        if (k == 0 || k == n) {
            return 1;
        }
        long long int result = 1;
        k = min(k, n - k); // Optimize for smaller k
        for (int i = 0; i < k; ++i) {
            result *= (n - i);
            result /= (i + 1);
        }
        return result;
    }

    // Calculate unique paths using combinations
    int uniquePaths(int m, int n) {
        return calculateCombination(m + n - 2, min(m - 1, n - 1));
    }
//     Using DP
//     vector<vector<int>> dp(m, vector<int>(n, 1)); 
    
//     for(int i=1;i<m;i++)
//     {
//         for(int j=1;j<n;j++)
//         {
//             dp[i][j]=dp[i-1][j] + dp[i][j-1];
//         }
//     }
//     return dp[m-1][n-1];
};