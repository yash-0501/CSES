#define ll long long

#include<bits/stdc++.h>

using namespace std;

ll nCr(ll n, ll r){
    // n! = n*(n-1)*(n-2)!
    // since r is always 2
    // (n-r)! = (n-2)! ---- which gets cancelled
    return (n*(n-1))/2;
}

void f(int k){
    long long n = (k*k);
    long long r = 2;
    long long totalWays = nCr(n,r);
    // int threeByTwo = (k-2)*(k-1);
    // int twoByThree = (k-1)*(k-2);
    cout<<(totalWays - (4 * (k-2)*(k-1)))<<endl;
}

int main(){

    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        f(i);
    }
    return 0;
}