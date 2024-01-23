#include<bits/stdc++.h>
using namespace std;

void f(long long n){
    while(n!=1){
        cout<<n<<" ";
        if(n%2==1){
            n = (n*3)+1;
        }else{
            n = n / 2;
        }
    }
    cout<<n;
}

int main()
{
    int n;
    cin>>n;
    f(n);
 return 0;
}