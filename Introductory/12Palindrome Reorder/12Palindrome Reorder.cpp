#define ll long long

#include<bits/stdc++.h>

using namespace std;

void f(string &s, vector<int> &cnt){
    string front = "";

    char c;
    int count = 0;
    for(int it = 0; it<26; it++){
        if(cnt[it]%2==1){
            if(count){
                cout<<"NO SOLUTION";
                return;
            }
            c = static_cast<char>(it+'A');
            count = cnt[it];
        }
        else if(cnt[it] != 0){
            char ch = static_cast<char>(it+'A');
            // cout<<ch<<endl;
            for(int i=1;i<=cnt[it];i+=2){
                front.push_back(ch);
            }
        }
    }
    cout<<front;
    while(count != 0){
        cout<<(c);
        count--;
    }
    
    reverse(front.begin(),front.end());
    cout<<front;
}

int main(){
    string s;
    getline(cin,s);

    vector<int> cnt(26,0);
    for(auto it:s)
        cnt[it - 'A']++;
    
    f(s,cnt);

    return 0;
}