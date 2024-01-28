#define ll long long

#include<bits/stdc++.h>

using namespace std;

bool isSafe(int r, int c, vector<string> &board){
    int row = r, col = c;
    while(row>=0 && col>=0){
        if(board[row][col] == 'Q' ) return false;
        row--;
        col--;
    }
    row = r, col = c;
    while(row<8 && col>=0){
        if(board[row][col] == 'Q' ) return false;
        row++;
        col--;
    }
    row = r, col = c;
    while(col>=0){
        if(board[row][col] == 'Q' ) return false;
        col--;
    }
    return true;
}

int placeQueens(int col, vector<string> &board){
    if(col == 8)
        return 1;
    
    int count = 0;
   
    for(int row = 0; row<8; row++){
        if(isSafe(row,col,board) && board[row][col]!='*'){
            board[row][col] = 'Q';
            count = count + placeQueens(col+1,board);
            board[row][col] = '.';
        }
    }
    return count;
}

int main(){

    vector<string> board;
    for(int i=0;i<8;i++){
        string s;
        getline(cin,s);
        board.push_back(s);
    }
    cout<<placeQueens(0,board);
    return 0;
}