#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y,z;
	    cin>>x>>y>>z;
	    if(x*10>=y){
	        cout<<y*z<<endl;
	    }
	    else{
	        cout<<x*10*z<<endl;
	    }
	}
	    
}
