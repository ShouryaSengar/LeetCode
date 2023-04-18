class Solution {
public:
    string mergeAlternately(string s1, string s2) {
        int n=s1.length(), m=s2.length();
        string ans;
        
        for(int i=0; i<max(m,n); i++)
        {
            if(i < n)
            {
                ans.push_back(s1[i]);
            }
            if(i < m)
            {
                ans.push_back(s2[i]);
            }
        }
        
        return ans;
    }
};