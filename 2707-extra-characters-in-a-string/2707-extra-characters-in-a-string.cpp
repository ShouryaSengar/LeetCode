#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    int minExtraChar(string s, vector<string>& v) {
        int l = s.size(), n = v.size();
        vector<int> dp(l + 1, INT_MAX); // Initialize a DP array to store minimum extra characters needed at each position

        dp[0] = 0; // No extra characters needed for an empty string

        for (int i = 1; i <= l; i++) {
            for (int j = 0; j < n; j++) {
                int len = v[j].size();
                if (i >= len) {
                    string sub = s.substr(i - len, len);
                    if (sub == v[j]) {
                        dp[i] = min(dp[i], dp[i - len]);
                    }
                }
            }
            dp[i] = min(dp[i], dp[i - 1] + 1); // Consider adding an extra character
        }

        return dp[l];
    }
};
