class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int colgrid[9][9]={0};
        int rowgrid[9][9]={0};
        int gridgrid[9][9]={0};

        for(int i=0;i<board.size(); i++){
            for(int j=0;j<board.size(); j++){
                if(board[i][j]!='.'){
                    int number= board[i][j] -'0';
                    int k= i/3*3+j/3;
                    if((rowgrid[i][number-1]++) || colgrid[j][number-1]++ || gridgrid[k][number-1]++){
                        return false;
            }
                }
            }

            
        }
        return true;
    }
};
