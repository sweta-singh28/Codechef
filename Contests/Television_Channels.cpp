#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int x;
	cin>>x;
	int count = 0;
	for(int i=1; i<=x; i++){
	    if(i%2 != 0){
	        count++;
	    }
	}
	cout<<count;

}
