#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y;
	    cin>>x>>y;
	    if((y-x)%8 == 0){
	        cout<<(y-x)/8<<endl;
	    }
	    else{
	        cout<<(y-x)/8+1<<endl;
	    }
	}

}
