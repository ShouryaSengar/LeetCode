class Solution {
public:
    int diagonalSum(vector<vector<int>>& m) {
        int sum = 0;
        for(int i=0; i<m.size(); i++)
        {
            for(int j=0; j<m[0].size(); j++)
            {
                if(i==j or j==m.size()-1-i)
                {
                    sum += m[i][j];
                }
            }
        }
        // cout << m.size() <<endl;
        // // if(m.size()%2==1)
        // //     return sum - m[m.size()/2][m.size()/2];
        // // else
            return sum;
    }
};