#define ll long long

#include<bits/stdc++.h>

using namespace std;

int f(vector<int> &arr, vector<int> &dep, int n){
    int i = 0, j = 0, maxCount = 1, count = 0;

    while(i<n && j<n){
        if(arr[i] < dep[j]){
            count++;   
        }else if(arr[i] >= dep[j]){
            j++;
        }
        maxCount = max(maxCount, count);
        i++;
    }
    return maxCount;

}

int main(){

    int n;
    cin>>n;
    vector<int> arr, dep;
    for(int  i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        arr.push_back(a);
        dep.push_back(b);
    }

    sort(arr.begin(),arr.end());
    sort(dep.begin(),dep.end());

    cout<<f(arr,dep,n);

    return 0;
}