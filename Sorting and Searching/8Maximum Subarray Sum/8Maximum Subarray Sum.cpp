#define ll long long

#include<bits/stdc++.h>

using namespace std;


int main(){

    int n;
    cin>>n;

    ll maxSum = INT_MIN, sum = 0;
    vector<int> nums;
    for(int i = 0; i<n; i++){
        int a;
        cin>>a;
        sum += a;
        maxSum = max(sum,maxSum);
        if(sum <= 0)
            sum = 0;
    }
    cout<<maxSum;
    return 0;
}