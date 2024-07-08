class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int row=matrix.size();
        int col=matrix[0].size();
        vector<int> rowZero(row,false);
        vector<int> colZero(col,false);
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(matrix[i][j]==0){
                    rowZero[i]=true;
                    colZero[j]=true;
                }
            }
        }
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(rowZero[i] || colZero[j]) matrix[i][j]=0;
            }
        }
        //return matrix;
    }
};
// class Solution {
// public:
//     void setZeroes(vector<vector<int>>& matrix) {
//         int rows = matrix.size();
//         int cols = matrix[0].size();
//         vector<int> rowZero(rows, false);
//         vector<int> colZero(cols, false);

//         // First pass to find all rows and columns that need to be zeroed
//         for (int i = 0; i < rows; ++i) {
//             for (int j = 0; j < cols; ++j) {
//                 if (matrix[i][j] == 0) {
//                     rowZero[i] = true;
//                     colZero[j] = true;
//                 }
//             }
//         }

//         // Second pass to set the rows and columns to zero
//         for (int i = 0; i < rows; ++i) {
//             for (int j = 0; j < cols; ++j) {
//                 if (rowZero[i] || colZero[j]) {
//                     matrix[i][j] = 0;
//                 }
//             }
//         }
//     }
// };
