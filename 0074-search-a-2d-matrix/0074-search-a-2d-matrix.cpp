class Solution {
public:
    bool searchMatrix(vector<vector<int>>& v, int t) {
        int m = v.size(), n = v[0].size();
    
        // Select each row and check whether the target is present in that row or not
        for (int i = 0; i < m; ++i) {
            if (v[i][0] <= t && t <= v[i][n - 1]) {
                // Applying binary search on each row
                int l = 0, r = n - 1; 
                while (l <= r) {
                    int mid = l + (r - l) / 2;
                    if (v[i][mid] == t) {
                        return true;
                    } else if (v[i][mid] < t) {
                        l = mid + 1;
                    } else {
                        r = mid - 1;
                    }
                }
                return false;
            }
        }
        return false;
    }
};
