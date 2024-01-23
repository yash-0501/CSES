#define ll long long;
#include<bits/stdc++.h>
using namespace std;

void f(int n){
    if(n==2|| n == 3){
        cout<<"NO SOLUTION";
        return;
    }
    vector<int> output;
    
    for(int i=2;i<=n;i=i+2){
        output.push_back(i);
    }
    for(int i=1;i<=n;i=i+2){
        output.push_back(i);
    }
    for(auto it:output)
        cout<<it<<" ";
}

int main(){

    int n;
    cin>>n;
    f(n);
    return 0;
}