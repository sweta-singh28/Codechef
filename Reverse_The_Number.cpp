#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,RN = 0,remain;
	    cin>>n;
	    while(n != 0){
	        remain = n%10;
	        RN = RN * 10 +remain;
	        n/=10;
	    }
	    cout<<RN<<endl;
	}

}
