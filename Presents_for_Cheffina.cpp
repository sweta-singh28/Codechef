#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    if(n==4){
	        cout<<4<<endl;
	    }
	    else{
	        cout<<n-(n/5)<<endl;
	    }
	}

}
