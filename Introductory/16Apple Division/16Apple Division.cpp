#define ll long long
 
#include<bits/stdc++.h>
 
using namespace std;
 
ll findminans(vector<int> &arr,ll currsum,ll totalsum,int i){
    if (i<0)
        return abs((totalsum-currsum) - currsum);
 
        return min(findminans(arr,currsum+arr[i],totalsum,i-1),findminans(arr,currsum,totalsum,i-1));
 
}
 
int main(){
 
    int n;
    cin>>n;
    vector<int> vec;
    ll totalSum = 0;
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        vec.push_back(num);
        totalSum += num;
    }
    cout<<findminans(vec,0,totalSum,n-1)<<endl;
    return 0;
}