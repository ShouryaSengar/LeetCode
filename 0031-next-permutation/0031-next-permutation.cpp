class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int i = n - 2;  // Start from the second-to-last element
        int bp = -1;    // Position to break the sequence
        
        // Find the position where the current element is smaller than the next one
        while (i >= 0) {
            if (nums[i] < nums[i + 1]) {
                bp = i;
                break;
            }
            i--;
        }
        
        // If no such position is found, the entire sequence is in descending order
        if (bp == -1) {
            reverse(nums.begin(), nums.end());  // Reverse the sequence to get the smallest permutation
            return;
        }
        
        int j = n - 1, mi = -1;
        // Find the smallest element to the right of 'bp' that is greater than nums[bp]
        while (j > bp) {
            if (nums[j] > nums[bp]) {
                mi = j;
                break;
            }
            j--;
        }
        
        swap(nums[bp], nums[mi]);  // Swap the found element with nums[bp]
        reverse(nums.begin() + bp + 1, nums.end());  // Reverse the elements to the right of bp
        
        return;
    }
};
