#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	int count = 0;
	for(int i=0; i<n; i++){
	    int x;
	    cin>>x;
	    if(x%2 == 0){
	       count++;
	    }
	   
	}
	if(count>n-count){
	    cout<<"READY FOR BATTLE"<<endl;
	}
	else{
	    cout<<"NOT READY"<<endl;
	}
	

}
