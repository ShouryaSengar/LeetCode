class Solution {
public:
    bool isAnagram(string s, string t) {
        ios_base::sync_with_stdio(0);
        cin.tie(0), cout.tie(0);
        if (s.size() != t.size()) return false;

        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        if(s==t)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};