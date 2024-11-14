#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int p,l;
	    cin>>p>>l;
	    double divide=(double)l/(double)p;
	    
	    if(divide*100 >= 75){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}

}