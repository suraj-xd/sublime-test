#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector<vi>
#define rep(i,a,b) for(int i=a;i<b;i++)
bool isValid(vector<vector<char>> &board,int row,int col,char c){
    rep(i,0,9){
        if(board[row][i]==c){
            return false;
        }
        if(board[i][col]==c){
            return false;
        }
        if(board[3*(row/3)+i/3][3*(col/3)+i%3]==c){
            return false;
        }
    }
    return true;
}
bool solve(vector<vector<char>> &board){
    rep(i,0,board.size()){
        rep(j,0,board[0].size()){
            if(board[i][j]=='.'){
                for(char c='1';c<='9';c++){
                    if(isValid(board,i,j,c)){
                        board[i][j]=c;
                        if(solve(board)==true){
                            return true;
                        }else{
                            board[i][j]='.';
                        }
                    }
                }
                return false;
            }
        }
    }
    return true;
}
void solveSudoku(vector<vector<char>> &board){
    solve(board);
}
int main(){
    vector<vector<char>> soduko = {
        {'5','3','.','.','7','.','.','.','.'},
        {'6','.','.','1','9','5','.','.','.'},
        {'.','9','8','.','.','.','.','6','.'},
        {'8','.','.','.','6','.','.','.','3'},
        {'4','.','.','8','.','3','.','.','1'},
        {'7','.','.','.','2','.','.','.','6'},
        {'.','6','.','.','.','.','2','8','.'},
        {'.','.','.','4','1','9','.','.','5'},
        {'.','.','.','.','8','.','.','7','9'}
    };
    solveSudoku(soduko);
    for(auto it:soduko){
        for(auto i:it){
            cout<<i<<" ";
        }cout<<endl;
    }
}