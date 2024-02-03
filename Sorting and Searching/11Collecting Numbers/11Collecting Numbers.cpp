#define ll long long

#include<bits/stdc++.h>

using namespace std;

ll f(vector<int> &nums, int n, unordered_map<int,int> &mp){
    int count = 1, prev = -1;
    for(int i=1; i<=n; i++){
        if(mp[i]<prev){
            count++;
        }
        prev = mp[i];
        
    }
    return count;
}

int main(){

    int n;
    cin>>n;

    vector<int> nums;
    unordered_map<int,int> mp;

    for(int i=0; i<n; i++){
        int a;
        cin>>a;
        nums.push_back(a);
        mp[a] = i+1;
    }

    cout<<f(nums,n,mp);

    

    return 0;
}