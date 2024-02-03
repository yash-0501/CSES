#define ll long long

#include<bits/stdc++.h>

using namespace std;

bool comp(pair<ll,ll> A, pair<ll,ll> B){
    return A.second<B.second;
}

int f(vector<pair<ll,ll>> &movies, int n){
    ll count = 1;
    ll currEnd = movies[0].second;
    for(int i = 1; i<n; i++){
        if(currEnd <= movies[i].first){
            count++;
            currEnd = movies[i].second;
        }
    }
    return count;
}

int main(){

    int n;
    cin>>n;

    vector<pair<ll,ll>> movies;
    for(int i=0; i<n;i++){
        ll a, b;
        cin>>a>>b;
        movies.push_back({a,b});
    }

    sort(movies.begin(), movies.end(), comp);

    cout<<f(movies, n);

    return 0;
}