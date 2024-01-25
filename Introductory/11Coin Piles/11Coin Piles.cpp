#define ll long long

#include<bits/stdc++.h>

using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        if(a>b) swap(a,b);
        // cout<<a<<" "<<b<<endl;
        if((a+b)%3==0 && (b<=(2*a))){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}