class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size();

        // Initialize the range for binary search
        int left = 1;
        int right = n - 1;

        while (left < right) {
            int mid = left + (right - left) / 2;
            int count = 0;

            // Count the number of elements less than or equal to 'mid'
            for (int num : nums) {
                if (num <= mid) {
                    count++;
                }
            }

            // If count is greater than 'mid', the duplicate is in the left half
            if (count > mid) {
                right = mid;
            } else {
                // Otherwise, it's in the right half
                left = mid + 1;
            }
        }

        // 'left' now contains the duplicate number
        return left;
    }
};
