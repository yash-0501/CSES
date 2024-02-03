#define ll long long

#include<bits/stdc++.h>

using namespace std;

bool comp(pair<int,int> A, pair<int,int>B){
    return A.first < B.first;
}

int main(){

    int n, x;
    cin>>n>>x;

    vector<pair<int,int>> nums;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        nums.push_back({a,i+1});
    }

    sort(nums.begin(), nums.end(), comp);

    int i = 0, j = n-1;
    ll sum = 0;

    while(i<j){
        sum = nums[i].first+nums[j].first;
        if(sum < x){
            i++;
        }else if(sum > x){
            j--;
        }else{
            cout<<nums[i].second<<" "<<nums[j].second;
            return 0;
        }
    }
    cout<<"IMPOSSIBLE";

    return 0;
}