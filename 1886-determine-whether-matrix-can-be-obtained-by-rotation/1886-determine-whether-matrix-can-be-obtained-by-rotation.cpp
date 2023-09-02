class Solution {
public:
    
    void transpose(vector<vector<int>>& mat) {
        int n = mat.size();
        for(int i=0; i<n; ++i) {
            for(int j=i+1; j<n; ++j) {
                swap(mat[i][j], mat[j][i]);
            }
        }
    }
    
    void revAllRow(vector<vector<int>>& mat) {
        int n = mat.size();
        for(int i=0; i<n; i++) {
            vector<int>& row = mat[i];
            reverse(row.begin(),row.end());
        }
    }
    
    void rotateMatrix(vector<vector<int>>& mat) {
        int n = mat.size();
        //ClockWise Direction
        transpose(mat);
        revAllRow(mat);
    }
    
    bool isEqual(vector<vector<int>>& mat, vector<vector<int>>& target) {
        int n = mat.size();
        for(int i=0; i<n; ++i) 
        {
            for(int j=0; j<n; ++j) 
            {
                if(mat[i][j]!=target[i][j]) 
                {
                    return false;
                }
            }
        }
        return true;
    }
    
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        int n = mat.size();
        for(int i=0; i<=3; i++) {
            if(isEqual(mat,target))
            {
                return true;
            }
            else
            {
                rotateMatrix(mat);
            }
        }
        return false;
    }
};