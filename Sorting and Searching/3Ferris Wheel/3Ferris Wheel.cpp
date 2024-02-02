#define ll long long

#include<bits/stdc++.h>

using namespace std;


int f(vector<int> &nums, int x, int n){
    ll count = 0;
    int l = 0, r = n-1;
    while(l<=r){
        if(nums[l] + nums[r] <= x){
            r--;
        }
        count++;
        l++;
    }
    return count;
}

int main(){

    int n,x;
    cin>>n>>x;

    vector<int> children;
    for(int i=0;i<n;i++){
        int wt;
        cin>>wt;
        children.push_back(wt);
    }
    sort(children.begin(), children.end(), greater());
    cout<<f(children, x, n);

    return 0;
}