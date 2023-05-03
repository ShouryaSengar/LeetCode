class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>> ans;
        unordered_set<int> s1;
        unordered_set<int> s2;
        for(int i=0; i<nums1.size(); i++)
        {
            s1.insert(nums1[i]);
        }
        for(int i=0; i<nums2.size(); i++)
        {
            s2.insert(nums2[i]);
        }
        vector<int> row1;
        for(auto i : s1)
        {
            // if element is not there then insert that
            if(s2.find(i)==s2.end())
            {
                row1.push_back(i);
            }
        }
        ans.push_back(row1);
        vector<int> row2;
        for(auto i : s2)
        {
            if(s1.find(i)==s1.end())
            {
                row2.push_back(i);
            }
        }
        ans.push_back(row2);
        return ans;
    }
};