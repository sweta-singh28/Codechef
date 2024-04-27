#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,x,p;
	    cin>>n>>x>>p;
	    if(3*x-(n-x)>=p){
	        cout<<"PASS"<<endl;
	}
	else{
	    cout<<"FAIL"<<endl;
	}
	}
	return 0;
	

}
