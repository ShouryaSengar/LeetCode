class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& v) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        int n = v.size(); 
        vector<vector<int>> ans;
        
        // Sort v based on the start values
        sort(v.begin(), v.end());
        
        for(int i = 0; i < n; ++i) {
            vector<int> sa = v[i];
            int j = i;

            while(j + 1 < n && sa[1] >= v[j + 1][0]) {
                sa[1] = max(sa[1], v[j + 1][1]); 
                // sa[0] = min(sa[0], v[j + 1][0]);
                j++;
            }
            
            ans.push_back(sa);
            i = j;
        }
        return ans;
    }
};
