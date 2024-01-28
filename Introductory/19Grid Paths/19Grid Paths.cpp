#define ll long long

#include<bits/stdc++.h>

using namespace std;

void f(int i, int j, int idx, vector<int> &dir, vector<int> &delRow, vector<int> &delCol,vector<vector<int>> &vis, int steps, int &paths){
    if(vis[i][j]) return;
    if(i == 6 && j == 0){
        if(idx == 48){
                paths++;
        }
        return;
    }

    if(idx == 48)
        return;

    bool hitWall = (
        ((j > 0 && j < 6 && !vis[i][j-1] && !vis[i][j+1] ) 
        && ((i == 0 && vis[i+1][j]) || (i == 6 && vis[i-1][j]))) || 
        ((i > 0 && i < 6 && !vis[i-1][j] && !vis[i+1][j] ) 
        && ((j == 0 && vis[i][j+1]) || (j == 6 && vis[i][j-1]))) ||
        // middle parts are visited
        (j>0 && j<6 && !vis[i][j-1] && !vis[i][j+1] && 
        i>0 && vis[i-1][j] && i<6 && vis[i+1][j]) ||
        // left right
        (i>0 && i<6 && !vis[i-1][j] && !vis[i+1][j] && 
        j>0 && vis[i][j-1] && j<6 && vis[i][j+1])
    );

    if(hitWall) return;


    vis[i][j] = 1;
    
    if(dir[idx] == -1){
        for(int k = 0; k<4;k++){
            int nRow = i + delRow[k];
            int nCol = j + delCol[k];
            if(nRow>=0 && nCol>=0 && nRow<7 && nCol < 7 && !vis[nRow][nCol]){
                f(nRow,nCol,idx+1,dir,delRow,delCol,vis,steps,paths);   
            }
        }
    }else{
        int nRow = i + delRow[dir[idx]];
        int nCol = j + delCol[dir[idx]];

        if(nRow>=0 && nCol>=0 && nRow<7 && nCol < 7 && !vis[nRow][nCol]){
            f(nRow,nCol,idx+1,dir,delRow,delCol,vis,steps,paths);
            
        }
    }
    vis[i][j] = 0;
}

int main(){

    string path;
    getline(cin,path);

    vector<int> delRow = {-1,0,1,0};
    vector<int> delCol = {0,1,0,-1};


    vector<vector<int>> vis(8, vector<int>(7,0));
    int steps = 0;
    int paths = 0;

    vector<int> dir;
    for(auto it:path){
        if(it == 'U')
            dir.push_back(0);
        else if(it == 'R')
            dir.push_back(1);
        else if(it == 'D')
            dir.push_back(2);
        else if(it == 'L')
            dir.push_back(3);
        else 
            dir.push_back(-1);
    }
    f(0,0,0,dir,delRow,delCol, vis, steps, paths);
    
    cout<<(paths);

    return 0;
}