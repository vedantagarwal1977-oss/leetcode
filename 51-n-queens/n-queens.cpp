class Solution {
public:
    bool check(vector<string> &board,int row,int j,int n){
        for(int i=0;i<n;i++){
            if(board[row][i]=='Q'){return false;}
        }
        for(int i=0;i<n;i++){
            if(board[i][j]=='Q'){return false;}
        }

        for(int i=row, a=j;i>=0 && a>=0;i--,a--){
            if(board[i][a]=='Q'){return false;}
        }
        for(int i=row,a=j;i>=0 && a<n;i--,a++){
            if(board[i][a]=='Q'){return false;}
        }
        return true;
    }
    void print(vector<vector<string>>&ans,vector<string> &board,int row,int n){

        if(row==n){
            ans.push_back(board);
            return;
        }
        for(int j=0;j<n;j++){
            if(check(board,row,j,n)){
                board[row][j]='Q';
                print(ans,board,row+1,n);
                board[row][j]='.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>>ans;
        vector<string> board(n,string(n,'.'));
        int row=0;
        int i=0;
        print(ans,board,row,n);
        return ans;
    }
};