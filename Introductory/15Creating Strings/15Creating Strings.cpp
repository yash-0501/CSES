#define ll long long

#include<bits/stdc++.h>

using namespace std;

void f(int idx, string &s, set<string> &st){
    if(idx == s.size()){
        st.insert(s);
        return;
    }
    for(int i = idx; i<s.size(); i++){
        if (i != idx && s[i] == s[idx])
            continue;
        swap(s[idx],s[i]);
        f(idx+1,s,st);
        swap(s[idx],s[i]);
    }
    
}

int main(){

    string s;
    getline(cin,s);
    set<string> st;

    f(0,s,st);
    cout<<st.size()<<endl;
    for(auto it:st)
        cout<<it<<endl;
    return 0;
}