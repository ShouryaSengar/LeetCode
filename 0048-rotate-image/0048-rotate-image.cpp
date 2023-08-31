class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        //Takeing Transpose
        for(int i=0; i<n; i++) {
            for(int j=i+1; j<n;j++) {
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        //Reversing each row of the matrix
        for(int i=0; i<n; i++) {
            int s=0, e=n-1;
            while(s<e) {
                swap(matrix[i][s],matrix[i][e]);
                s++;
                e--;
            }
        }
    }
};

