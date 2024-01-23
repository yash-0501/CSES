#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin>>n;
    long long prev = 0;
    long long ans = 0;
    for(int i=1;i<=n;i++){
        long long num;
        cin>>num;
        if(num<prev){
            ans += (prev-num);
        }else
            prev = num;
    }
    
    cout<<ans;
 return 0;
}