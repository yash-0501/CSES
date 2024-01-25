#define ll long long

#include<bits/stdc++.h>

using namespace std;


int main(){

    int n;
    cin>>n;
    int mod = 1e9+7;    
    int ans = 1;
    for(int i=0;i<n;i++){
        ans *= 2;
        ans %= mod;
    }
    cout<<ans;

    return 0;
}