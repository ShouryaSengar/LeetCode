class Solution {
public:
    int partitionString(string s) {
        int ans=1;
        unordered_map<char,int> mp;
        for(auto x:s)
        {
            if(mp.count(x)==0)
            {
                mp[x]++;
            }
            else
            {
                ans++;
                mp.clear();
                mp[x]++;
            }
        }
        return ans;
    }
};