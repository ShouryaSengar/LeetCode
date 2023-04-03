class Solution {
public:
    #pragma GCC optimize("Ofast")
    #pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
    #pragma GCC optimize("unroll-loops")
    int numRescueBoats(vector<int>& people, int limit) {
        ios_base::sync_with_stdio(0);
        cin.tie(NULL);
        int boat = 0;
        sort(people.begin(), people.end());
        int l=0;
        int r= people.size() - 1;
        while(l<=r)
        {
            if(people[l]+people[r]<=limit)
            {
                r--;
                l++;
            }
            else
            {
                r--;   
            }
            boat++;
        }
        return boat;
    }
};