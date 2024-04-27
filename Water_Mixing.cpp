#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b,x,y;
	    cin>>a>>b>>x>>y;
	    if(b-a>0){
	       if(a+x>=b){
	           cout<<"YES"<<endl;
	       }
	       else{
	           cout<<"NO"<<endl;
	       }
	    }
	    else if(b-a<0){
	        if(a-y<=b){
	            cout<<"YES"<<endl;
	        }
	        else{
	            cout<<"NO"<<endl;
	        }
	    }
	    else{
	        cout<<"YES"<<endl;
	    }
	}

}
