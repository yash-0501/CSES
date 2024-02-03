#define ll long long

#include<bits/stdc++.h>

using namespace std;

int getMedian(vector<int> &sticks, int n){
    if(n%2==1){
        return (sticks[n/2]);
    }
    return (sticks[n/2] + sticks[(n/2)+1])/2;
}

int main(){

    int n;
    cin>>n;

    vector<int> sticks;
    for(int i=0; i<n; i++){
        int a;
        cin>>a;
        sticks.push_back(a);
    }
    sort(sticks.begin(), sticks.end());
    int med = sticks[n/2];

    ll ans = 0;
    for(auto it:sticks){
        ans += abs(it-med);
    }
    cout<<ans;

    return 0;
}