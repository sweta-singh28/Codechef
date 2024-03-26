#include <bits/stdc++.h>
using namespace std;

bool isFound(vector<int>a, int n , int x){
	    for(int i=0; i<n; i++){
	    if(a[i]==x){
	       return true;
	    }
	    
	   }
	return false;
	}

int main() {
	// your code goes here
	int n,x;
	cin>>n>>x;
	 
	 vector<int>a;
	 for(int i=0; i<n; i++){
	     int temp;
	     cin>>temp;
	     a.push_back(temp);
	 }
	 

	if( isFound(a, n, x)){
	    cout<<"YES"<<endl;
	}
	else{
	    cout<<"NO"<<endl;
	}
	return 0;

}
