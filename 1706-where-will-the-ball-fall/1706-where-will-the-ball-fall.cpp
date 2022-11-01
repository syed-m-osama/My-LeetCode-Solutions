class Solution {
public:
    vector<int> findBall(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        vector<int> finPos;
        for(int i = 0;i < n;i++) finPos.push_back(i);
        for(int i = 0; i< m; i++){
            for(int j = 0; j< n; j++){
                if(finPos[j] == -1) continue;
                if(grid[i][finPos[j]] == 1){
                    if(finPos[j] == n-1){
                        finPos[j] = -1; continue;
                    }
                    if(grid[i][finPos[j]+1] == -1){
                        finPos[j] = -1;
                    }
                    else{
                        finPos[j] = finPos[j] + 1;
                    }
                }
                else{
                    if(finPos[j] == 0){
                        finPos[j] = -1; continue;
                    }
                    if(grid[i][finPos[j]-1] == 1){
                        finPos[j] = -1;
                    }
                    else{
                        finPos[j] = finPos[j] - 1;
                    }
                    
                }
                
                
            //     if(grid[i][finPos[j]] == -1){
            //         if(j == 0) finPos[j] = -1;
            //         else{
            //             if(grid[i][finPos[j]-1] == 1){
            //                 finPos[j] = -1;
            //             }
            //             else{
            //                 finPos[j] = finPos[j]-1;
            //             }
            //         }
            //     }
            //     else if(grid[i][finPos[j]] == 1){
            //         if(j == n-1) finPos[j] = -1;
            //         else{
            //             if(grid[i][finPos[j]+1] == -1){
            //                 finPos[j] = -1;
            //             }
            //             else{
            //                 finPos[j] = finPos[j]+1;
            //             }
            //         }
            //     }
            // }
            }
            for(auto i:finPos) cout<<i<<" ";
            cout<<endl;
        }
        return finPos;
    }
};