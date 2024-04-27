#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x;
	    cin>>x;
	    if(x%5!=0){
	        cout<<"-1"<<endl;
	    }
	    else{
	        cout<<x/10+(x%10)/5<<endl;
	    }
	    
	   
	 }
}
