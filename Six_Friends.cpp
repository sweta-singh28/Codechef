#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x, y, a, b;
	    cin>>x>>y;
	    a = x * 3;
	    b = y * 2;
	    
	    if(a<b){
	        cout<<a<<endl;
	    }
	    else{
	        cout<<b<<endl;
	    }
	    
	}
}
