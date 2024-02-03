#define ll long long

#include<bits/stdc++.h>

using namespace std;

ll f(vector<int> &coins, int n){
    ll sum = 0;
    for(int i=0; i<n; i++){
        if(coins[i] <= sum+1){
            sum+=coins[i];
        }else{
            break;
        }
    }
    return sum+1;
}


int main(){

    int n;
    cin>>n;

    vector<int> coins;
    for(int i=0;i<n;i++){
        int c; 
        cin>>c;
        coins.push_back(c);
    }

    sort(coins.begin(),coins.end());

    cout<<f(coins, n);

    return 0;
}