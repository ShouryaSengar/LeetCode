class Solution {
public:
    int minInsertions(string s) {
      vector<vector<int>> dp(s.size(), vector<int>(s.size(), 1e6));
      int n = s.size();
      for(int i = 0; i < n; i++)
          dp[i][i] = 0;
      for(int len = 1; len <= n; len++) {
          for(int i = 0; i + len < n; i++) {
              dp[i][i] = 0;
              int j = i + len;
              if(s[i] == s[j]) {
                  if(len == 1)
                      dp[i][j] = 0;
                  else
                      dp[i][j] = dp[i + 1][j - 1];
              }
              else {
                  dp[i][j] = min(1 + dp[i + 1][j], 1 + dp[i][j - 1]);
              }
          }
      }
      return dp[0][n - 1];
  }
};