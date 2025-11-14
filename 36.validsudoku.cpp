class Solution {
public:
bool safe(vector<vector<char>>& board,int row,int col,char dig){
    for(int i=0;i<9;i++){
        if(i!=col &&board[row][i]==dig){
return false;
        }}
        for(int i=0;i<9;i++){
        if(i!=row &&board[i][col]==dig){
return false;
        }}
       int sr=(row/3)*3;
       int sc=(col/3)*3;
        for(int i=sr;i<=sr+2;i++){
            for(int j=sc;j<=sc+2;j++){
                if ((i != row || j != col) && board[i][j] == dig)
{return false;}
            }
        } return true;
}
bool valid(vector<vector<char>>& board,int row,int col){
    if(row==9){return true;}
    if(col==9){return valid(board,row+1,0);}
    if(board[row][col]=='.'){
        if(col==9){return valid(board,row+1,0);}
        return valid(board,row,col+1);
    }
    char dig=board[row][col];
    if(!safe(board,row,col,dig)){return false;}

return valid(board,row,col+1);
}
    bool isValidSudoku(vector<vector<char>>& board) {
       return valid(board,0,0);

    }
};