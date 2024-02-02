#define ll long long

#include<bits/stdc++.h>

using namespace std;

int f(vector<int> &apps, vector<int> &aparts, int k, int n, int m){
    sort(apps.begin(),apps.end());
    sort(aparts.begin(),aparts.end());
    int i=0, j = 0, count = 0;
    while(i<n && j<m){
        while(j<m && aparts[j] < apps[i] - k)
            j++;
        if(abs(aparts[j]-apps[i])<=k){
            count++;
            i++;
            j++;
        }else{
            i++;
        }
    }
    return count;
}

int main(){

    int n, m, k;
    cin>>n>>m>>k;
    vector<int> applicants;
    vector<int> aparts;

    for(int i=1;i<=n;i++){
        int app;
        cin>>app;
        applicants.push_back(app);
    }
    for(int i=1;i<=m;i++){
        int apart;
        cin>>apart;
        aparts.push_back(apart);
    }
    cout<<f(applicants, aparts, k, n, m);
    return 0;
}