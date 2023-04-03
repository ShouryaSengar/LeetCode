class Solution {
public:
    #pragma GCC optimize("Ofast")
    #pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
    #pragma GCC optimize("unroll-loops")
    typedef long long ll;

    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        ios_base::sync_with_stdio(0);
        cin.tie(NULL);                    
        cout.tie(NULL);
        int n=spells.size();
        int m=potions.size();
        vector<int> pairs;
        sort(potions.begin(),potions.end());
        for(int i = 0; i<n; i++)
        {
            ll target;
            if(success % spells[i] == 0)
            {
                target = (success/spells[i]);
            }
            else
            {
                target = (success/spells[i])+1;
            }
            ll l = 0;
            ll r = m-1;
            bool flag=1;
            while(l<=r)
            {
                ll mid = l + (r-l)/2;
                if(potions[mid]>=target)
                {
                    r=mid-1;
                }
                else if(potions[mid]<target)
                {
                    l=mid+1;
                }
            }
            pairs.push_back(m-l); 
        }
        return pairs;
    }
};