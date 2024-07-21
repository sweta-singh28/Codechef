#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x, y;
	    cin>>x>>y;
	    int AtoB = (500-(x*2)) + (1000-((x+y)*4));
	    int BtoA = (1000-(y*4)) + (500-((x+y)*2));
	    cout<<max(AtoB, BtoA)<<endl;
	}

}
