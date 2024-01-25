#define ll long long

#include<bits/stdc++.h>

using namespace std;


int main(){
    int n;
    cin>>n;

    int c = 0;
    for(int i = 5; n/i>=1; i*=5){
        c += (n/i);
    }
    cout<<c;

    return 0;
}