#include<bits/stdc++.h>
using namespace std;

void f(long long n, long long sum){
    long long nSum = (n*(n+1))/2;
    cout<<nSum - sum;
}

int main()
{
    int n;
    cin>>n;
    long long sum = 0;
    for(int i=1;i<n;i++){
        long long num;
        cin>>num;
        sum+=num;
    }
    
    f(n, sum);
 return 0;
}