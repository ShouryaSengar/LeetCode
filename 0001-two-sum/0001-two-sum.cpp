class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        ios_base::sync_with_stdio(0);
        cin.tie(0), cout.tie(0);
        vector<int> v;
        unordered_map<int, int> mp;
        for (int i = 0; i < nums.size(); i++)
        {
            if (mp.find(target - nums[i]) != mp.end())
            {
                v.push_back(mp[target - nums[i]]);
                v.push_back(i);
                return v;
            }
            else
            {
                mp[nums[i]] = i;
            }
        }
        return v;
    }
};