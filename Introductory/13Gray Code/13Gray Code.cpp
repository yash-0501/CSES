#define ll long long
 
#include<bits/stdc++.h>
 
using namespace std;
 
 
 
vector<string> generate(int n){
    if(n == 1)
        return {"0","1"};
    vector<string> ans;
    vector<string> temp = generate(n-1);
    int sz = temp.size();
    
    for(int i=0;i<sz;i++){
        ans.push_back("0"+temp[i]);
    }
    for(int i=sz-1;i>=0;i--){
        ans.push_back("1"+temp[i]);
    }
    return ans;
}
 
int main(){
 
    int n;
    cin>>n;
 
    vector<string> ans = generate(n);
    for(auto it:ans)
        cout<<it<<endl;
 
    return 0;
}
