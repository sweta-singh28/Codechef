#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int N;
	cin>>N;
	while(N--){
	    int a,b,c;
	    cin>>a>>b>>c;
	    int ans = a+b+c - max({a,b,c}) - min({a,b,c});
	    cout<<ans<<endl;
	    
	}

}
