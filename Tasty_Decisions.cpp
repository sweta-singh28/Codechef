#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y;
	    cin>>x>>y;
	    if(2*x > 5*y){
	        cout<<"Chocolate"<<endl;
	    }
	    else if(2*x < 5*y){
	        cout<<"Candy"<<endl;
	    }
	    else{
	        cout<<"Either"<<endl;
	    }
	}
	

}
