#define ll long long
#include<bits/stdc++.h>
using namespace std;

void f(ll x, ll y){
    if(x==y){
        cout<<((x-1)*(x-1))+x;
    }else if(x>y){
        if(x%2==0){
            cout<<(x*x)-y+1;
        }else{
            cout<<((x-1)*(x-1)+y);
        }
    }else{
        if(y%2==1){
            cout<<(y*y)-x+1;
        }else{
            cout<<((y-1)*(y-1)+x);
        }
    }
}

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int x,y;
        cin>>x;
        cin>>y;
        f(x,y);
        cout<<endl;
    }
    
    return 0;
}