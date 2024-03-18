#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a, b, c, d, x, y;
	    cin>>a>>b>>c>>d;
	    x = a-c;
	    y = b-d;
	    if(x<y){
	        cout<<"First"<<endl;
	    }
	    else if(y<x){
	        cout<<"Second"<<endl;
	    }
	    else{
	        cout<<"Any"<<endl;
	    }
	}
	

}
