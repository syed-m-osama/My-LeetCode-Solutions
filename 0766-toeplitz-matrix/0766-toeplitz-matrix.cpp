class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        int rowSize = matrix[0].size();
        int colSize = matrix.size();
        cout<<rowSize<<" "<<colSize;
        if(rowSize == 1 || colSize == 1) return true;
        vector<int> temp;
        for(int i= 0;i < rowSize;i++){
            temp.push_back(matrix[0][i]);
        }
        for(int i= 1;i < colSize;i++){
            temp[rowSize-1] = temp[rowSize-2];
            for(int j =0;j<rowSize-1;j++){
                if(temp[j] != matrix[i][j+1]){
                    return false;
                }
                temp[j] = matrix[i][j];
            }
            
            
        }
        return true;
    }
};