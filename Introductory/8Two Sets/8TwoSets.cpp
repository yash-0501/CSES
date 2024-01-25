#define ll long long

#include<bits/stdc++.h>

using namespace std;

void f(ll sum, int n){
    ll s = sum/2;
    ll currSum = 0;
    unordered_set<int> first;
    while(n < s){
        first.insert(n);
        currSum += n;
        s -= n;
        n--;
    }
    // for(auto it:first)
    //     cout<<it<<" ";
    s = sum/2;
    first.insert(s-currSum);
    cout<<first.size()<<endl;
    for(auto it:first)
        cout<<it<<" ";
    cout<<endl;
    vector<int> second;
    for(int  i=1;i<=n;i++){
        if(first.find(i) == first.end())
            second.push_back(i);
    }
    cout<<second.size()<<endl;
    for(auto it:second)
        cout<<it<<" ";
    
}

// 8 -> 36

// 18
// 1 8 2 7
// 3 6 4 5

// 8 7 3
// 1 2 4 5 6

// 7 -> 28

// 14
// 1 7 2 4

// 3 5 6


int main(){

    int n;
    cin>>n;
    ll sum=0;
    if(n==1)
        cout<<"NO";
    else{
        
        for(int i=0;i<=n;i++)
            sum+=i;
        if(sum%2==1)
            cout<<"NO"<<endl;
        else{
            cout<<"YES"<<endl;
            f(sum,n);
        }
    }

    return 0;
}