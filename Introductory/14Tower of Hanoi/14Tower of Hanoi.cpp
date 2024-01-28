#define ll long long

#include<bits/stdc++.h>

using namespace std;


void f(int n, int from_rod, int to_rod, int aux_rod){ 
	if (n == 1) 
	{ 
		cout<<from_rod<<" "<<to_rod<<"\n"; 
		return; 
	} 
	f(n - 1, from_rod, aux_rod, to_rod);
	cout<<from_rod<<" "<<to_rod<<"\n"; 
	f(n - 1, aux_rod, to_rod, from_rod); 
}

int main(){

    int n;
    
    cin>>n;
    cout<<pow(2,n)-1<<endl;
    f(n,1,3,2);
    return 0;
}