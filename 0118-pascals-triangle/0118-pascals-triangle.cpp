class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> mat;
        for(int i=0;i<numRows;i++){
           mat.push_back(vector<int>(i+1,1));
               for(int j=1;j<i;j++){
                   mat[i][j] = mat[i-1][j-1] +mat[i-1][j];
               }
        }
        return mat;
    }
};