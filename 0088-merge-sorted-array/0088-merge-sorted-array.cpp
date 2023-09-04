class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) 
    {
        //In-Place (Self)
        // int i = 0, j = 0;
        // if(n==0 or m+n==0) return;
        // int l=m+n;
        // while(i<l and j<n) {
        //     if(nums1[i]<=nums2[j] and i<m) {
        //         ++i;
        //     }
        //     else
        //     {
        //         for(int k = m; k>i; k--){
        //             nums1[k]=nums1[k-1];
        //         }
        //         nums1[i]=nums2[j];
        //         ++j;
        //         ++i;
        //         ++m;
        //     }
        // }

        //Using Extra Space
        int i = 0, j = 0;
        if(n==0 or m+n==0) return;
        vector<int> ans;
        while(i<m+n and j<n) {
            if(nums1[i]<=nums2[j] and i<m) {
                ans.push_back(nums1[i]);
                ++i;
            }
            else
            {
                ans.push_back(nums2[j]);
                ++j;
            }
        }
        for(int x=i; x<m; x++) {
            ans.push_back(nums1[x]);
        }
        for(int x=0; x<ans.size(); ++x) {
            nums1[x]=ans[x];
        }
    }
};