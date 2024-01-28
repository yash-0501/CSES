#define ll long long

#include<bits/stdc++.h>

using namespace std;

void f(int i, int j, int idx, string &path, vector<int> &delRow, vector<int> &delCol,vector<vector<int>> &vis, int steps, int &paths){
    if(vis[i][j]) return;
    if(i == 6 && j == 0){
        if(idx == path.size()){
                paths++;
        }
        return;
    }

    bool hitWall = (
        ((j > 0 && j < 6 && !vis[i][j-1] && !vis[i][j+1] ) 
        && ((i == 0 && vis[i+1][j]) || (i == 6 && vis[i-1][j]))) || 
        ((i > 0 && i < 6 && !vis[i-1][j] && !vis[i+1][j] ) 
        && ((j == 0 && vis[i][j+1]) || (j == 6 && vis[i][j-1])))
    );

    if(hitWall) return;

    bool cannotMoveFurther = (
        // up down
        (j>0 && j<6 && !vis[i][j-1] && !vis[i][j+1] && 
        i>0 && vis[i-1][j] && i<6 && vis[i+1][j]) ||
        // left right
        (i>0 && i<6 && !vis[i-1][j] && !vis[i+1][j] && 
        j>0 && vis[i][j-1] && j<6 && vis[i][j+1])

    );

    if(cannotMoveFurther)
        return;

    vis[i][j] = 1;
    
    
    // up
    if(i-1 >= 0 && !vis[i-1][j]){
        steps++;
        f(i-1,j,idx+1,path,delRow,delCol,vis,steps,paths);
        steps--;
    }
    // down
    if(i+1 < 7 && !vis[i+1][j]){
        steps++;
        f(i+1,j,idx+1,path,delRow,delCol,vis,steps,paths);
        steps--;
    }
    // left
    if(j-1 >= 0 && !vis[i][j-1]){
        steps++;
        f(i,j-1,idx+1,path,delRow,delCol,vis,steps,paths);
        steps--;
    }
    // right
    if(j+1 >= 0 && !vis[i][j+1]){
        steps++;
        f(i,j+1,idx+1,path,delRow,delCol,vis,steps,paths);
        steps--;
    }
    
    vis[i][j] = 0;
}

int main(){

    string path;
    getline(cin,path);

    vector<int> delRow = {-1,0,1,0};
    vector<int> delCol = {0,1,0,-1};


    vector<vector<int>> vis(7, vector<int>(7,0));
    int steps = 0;
    int paths = 0;

    f(0,0,0,path,delRow,delCol, vis, steps, paths);
    
    cout<<(paths);

    return 0;
}