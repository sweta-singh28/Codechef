#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int w,x,y,z;
	    cin>>w>>x>>y>>z;
	    if(w+z*y>x){
	        cout<<"Overflow"<<endl;
	    }
	    else if(w+z*y == x){
	       cout<<"Filled"<<endl;
	    }
	    else{
	        cout<<"Unfilled"<<endl;
	    }
	    
	}

}
