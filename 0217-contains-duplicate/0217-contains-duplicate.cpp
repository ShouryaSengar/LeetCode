class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        ios_base::sync_with_stdio(0);
        cin.tie(0), cout.tie(0);
        sort(nums.begin(),nums.end());
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]==nums[i-1])
            {
                return true;
            }
        }
        return false;

        // set<int> s;
        // for(int i=0;i<nums.size();i++)
        // {
        //     s.insert(nums[i]);
        // }
        // if(s.size()!= nums.size())
        // {
        //     return true;
        // }
        // else
        // {
        //     return false;
        // }
    }
};