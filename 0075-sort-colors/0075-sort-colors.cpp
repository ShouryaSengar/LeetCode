class Solution {
public:
    void sortColors(vector<int>& nums) {
        //DNF
        int n=nums.size(),l=0,m=0,r=n-1;
        while(m<=r){
            if(nums[m]==0){
                swap(nums[m],nums[l]);
                m++;
                l++;
            }
            else if(nums[m]==1){
                m++;
            }
            else{
                swap(nums[m],nums[r]);
                r--;
            }
        }
    }
};