class Solution {
public:
    string pushDominoes(string dominoes) {
        
        int R = -1;
        int L = 0;
        
        for(int i=0; i<dominoes.length(); i++){
            if(dominoes[i] == 'R'){
                if(R != -1){
                    for(int k = R+1; k<i; k++){
                        dominoes[k] = 'R';
                    }
                }
                R = i;
            }
            else if(dominoes[i] == 'L'){
                if(R == -1){
                    for(int k = L; k<i; k++){
                        dominoes[k] = 'L';
                    }
                }
                else{
                    L = i-1;
                    R++;
                    while(R < L){
                        dominoes[R] = 'R';
                        dominoes[L] = 'L';
                        R++; L--;
                    }
                    R = -1;
                    L = i+1;
                }
            }
        }
        if(R != -1){
            for(int k = R+1;k<dominoes.length() ;k++) dominoes[k] = 'R';
        }
        return dominoes;
    }
};