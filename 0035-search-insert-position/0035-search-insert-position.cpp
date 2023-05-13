class Solution {
public:
    int helpRecursive(vector<int>& nums, int target, int low, int high) {
        if(high >= low) {
            int mid = low + (high - low) / 2;
            if(nums[mid] == target) {
                return mid;
            }
            else if(nums[mid] < target) {
                low = mid + 1;
            }
            else {
                high = mid - 1;
            } 
            return helpRecursive(nums, target, low, high);
        }
        else{
            return low;
        }
    }
    int helpIterative(vector<int>& nums, int target, int low, int high) {
        while(low <= high) {
            int mid = low + (high - low) / 2;
            if(nums[mid] == target) {
                return mid;
            }
            else if(nums[mid] < target) {
                low = mid + 1;
            }
            else {
                high = mid - 1;
            } 
        }
        return low;
    }
    int searchInsert(vector<int>& nums, int target) {
        // return helpRecursive(nums, target, 0, nums.size()-1);
        return helpIterative(nums, target, 0, nums.size()-1);
    }
};