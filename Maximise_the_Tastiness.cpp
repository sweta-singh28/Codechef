#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b,c,d;
	    cin>>a>>b>>c>>d;
	    if(a>b){
	        if(c>d){
	            cout<<a+c<<endl;
	        }
	        else{
	            cout<<a+d<<endl;
	        }
	    }
	    else{
	        if(c>d){
	            cout<<c+b<<endl;
	          
	        }
	        else{
	            cout<<b+d<<endl;
	        }
	    }
	}

}
