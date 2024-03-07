#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int x, y, z, a, b, c;
	cin>>a>>b>>x>>y;
	z = 2 * x + y;  //ronaldo
	c = 2 * a + b; //messi
	if(c>z){
	    cout<<"Messi";
	}
	else if(c < z){
	    cout<<"Ronaldo";
	}
	else{
	    cout<<"Equal";
	}

}
