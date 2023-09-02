class Solution {
public:
    /*USING STL only*/
    vector<int> countBits(int n) {
        vector<int> ans;
        for(int i=0; i<=n; i++) {
            ans.push_back(__builtin_popcount(i));
        }
        return ans;
    }
    /*USING DP*/
    // vector<int> countBits(int n) {
    //     vector<int>dp(n+1,0);
    //     for(int i = 0 ; i<=n;i++)
    //     {
    //         if(i%2==0)
    //         {
    //             dp[i]=dp[i/2];
    //         }
    //         else
    //         {
    //             dp[i]=dp[i/2]+1;
    //         }
    //     }
    //     return dp;
};