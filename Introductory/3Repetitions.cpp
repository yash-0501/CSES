#include<bits/stdc++.h>
using namespace std;

void f(string S){
    int maxLen = 1;
    int curr = 0;
    for(int i=1;i<S.size();i++){
        if(S[i]!=S[curr]){
            curr = i;
        }
        maxLen = max(maxLen,i-curr+1);
    }
    cout<<maxLen;
}

int main()
{
    string S;
    getline(cin,S);
    // cout<<S;
    
    f(S);
 return 0;
}