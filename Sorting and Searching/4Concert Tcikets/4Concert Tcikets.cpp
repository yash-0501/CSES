#define ll long long

#include<bits/stdc++.h>

using namespace std;

int main(){

    int n, m;
    cin>>n>>m;
    multiset<int> tickets;
    for(int i = 0; i<n; i++){
        int t;
        cin>>t;
        tickets.insert(t);
    }
    

    for(int i = 0; i<m; i++){
        int c;
        cin>>c;
        auto lb = tickets.upper_bound(c);
        if(lb == tickets.begin())
            cout<<-1<<endl;
        else{
            cout<<(*--lb)<<endl;
            tickets.erase(lb);
        }
    }


    return 0;
}