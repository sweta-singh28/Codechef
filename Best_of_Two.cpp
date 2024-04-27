#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a1,a2,a3,b1,b2,b3,A,B;
	    cin>>a1>>a2>>a3>>b1>>b2>>b3;
	     A = a1+a2+a3 - min({a1,a2,a3});
	     B = b1+b2+b3 - min({b1,b2,b3});
	     
	     
	     if(A>B){
	         cout<<"Alice"<<endl;
	     }
	     else if(A==B){
	         cout<<"Tie"<<endl;
	     }
	    else{
	        cout<<"Bob"<<endl;
	    }
	}

}
