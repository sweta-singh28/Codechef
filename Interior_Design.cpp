#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x1, y1, x2, y2, a, b;
	    cin>>x1>>y1>>x2>>y2;
	    a = x1+y1;
	    b = x2+y2;
	    if(a<b){
	        cout<<a<<endl;
	    }
	    else{
	        cout<<b<<endl;
	    }
	    
	}

}
