class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size();
        
        //Brute Force :
        // int ans = 0;
        // for (int i = 0; i < n; ++i) {
        //     for (int j = i + 1; j < n; ++j) {
        //         if (nums[i] == nums[j]) {
        //             ans = nums[i];
        //             return ans; 
        //         }
        //     }
        // }
        // return ans;
        
        //Optimal1 : Slow and fast pointer
//         int slow = nums[0];
//         int fast = nums[0];

//         // Phase 1: Detect the intersection point of the two pointers
//         do {
//             slow = nums[slow];
//             fast = nums[nums[fast]];
//         } while (slow != fast);

//         // Phase 2: Find the entrance to the cycle (duplicate number)
//         slow = nums[0];
//         while (slow != fast) {
//             slow = nums[slow];
//             fast = nums[fast];
//         }

//         return slow; // Return the duplicate number
        
        //Optimal 3: BS
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
