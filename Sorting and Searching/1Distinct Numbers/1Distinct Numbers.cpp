#define ll long long

#include<bits/stdc++.h>

using namespace std;

int f(vector<int> &nums){
    sort(nums.begin(), nums.end());
    int cnt = 1;
    for(int i=1;i<nums.size();i++){
        if(nums[i]!=nums[i-1])
            cnt++;
    }
    return cnt;
}

int main(){
    int n;
    vector<int> nums;

    cin>>n;
    for(int i=1;i<=n;i++){
        int nn;
        cin>>nn;
        nums.push_back(nn);
    }

    cout<<f(nums);

    return 0;
}