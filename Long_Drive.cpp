#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        int l=(10*(y-x))/(100-y);
        if((10*(y-x)%(100-y)==0)){ cout<<(10*(y-x))/(100-y)<<endl;}
        else {cout<<(10*(y-x))/(100-y)+1<<endl;}
        
        
    }
}