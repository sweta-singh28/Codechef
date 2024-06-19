#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,m;
	    cin>>n>>m;
	    
	    if(m/n == 0){
	        cout<<(n-m)<<endl;
	    }
	    else if((n-m%n)>(m%n)){
	        
	        cout<<(m%n)<<endl;
	    }
	    else{
	        cout<<(n-m%n)<<endl;
	    }
	}

}
