#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes 
	int t;
	cin>>t;
	while(t--){
	int x, y;
	cin>>x>>y;
	if(x == y){
	    cout<<"NEUTRAL"<<endl;
	}
	else if(x>y){
	    cout<<"LOSS"<<endl;
	}
	else{
	    cout<<"PROFIT"<<endl;
	}

}
}