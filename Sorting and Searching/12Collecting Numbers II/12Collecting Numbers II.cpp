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

    int n,m;
    cin>>n>>m;

    vector<int> nums(n+1);
    vector<int> pos(n+1);
    unordered_map<int,int> mp;

    for(int i=1; i<=n; i++){
        cin>>nums[i];
        pos[nums[i]] = i;
    }
    int pass = 1;
    for(int i=1; i<n; i++){
        if(pos[i+1]<pos[i])
            pass++;
    }

    int a,b;

    while(m--){
        cin>>a>>b;

        if(nums[a]-1 >= 1)
            mp.insert({nums[a]-1, nums[a]});
        if(nums[a]+1 <= n)
            mp.insert({nums[a], nums[a]+1});
        if(nums[b]-1 >= 1)
            mp.insert({nums[b]-1, nums[b]});
        if(nums[b]+1 <= n)
            mp.insert({nums[b], nums[b]+1});

        for(auto [key,val]:mp){
            if(pos[key] > pos[val]){
                pass--;
            }
        }

        swap(nums[a],nums[b]);
        pos[nums[a]] = a;
        pos[nums[b]] = b;

        for(auto [key,val]:mp){
            if(pos[key] > pos[val]){
                pass++;
            }
        }
        cout<<pass<<endl;
        mp.clear();
    } 
    

    return 0;
}