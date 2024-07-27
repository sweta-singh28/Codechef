#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,n;
	    cin>>x>>n;
	    if(x*100 > n){
	        cout<<0<<endl;
	    }
	    else if((n-x*100)%100 != 0){
	        cout<<(n-x*100)/100+1<<endl;
	    }
	    else{
	        cout<<(n-x*100)/100<<endl;
	    }
	    
	}

}
