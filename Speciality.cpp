#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x, y, z;
	    cin>>x>>y>>z;
	    if(x>y && x>z){
	        cout<<"Setetr"<<endl;
	    }
	    else if(y>x && y>z){
	        cout<<"Tester"<<endl;
	    }
	    else{
	        cout<<"Editorialist"<<endl;
	    }
	}

}
