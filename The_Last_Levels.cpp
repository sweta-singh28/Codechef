#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y,z;
	    cin>>x>>y>>z;
	   if (x%3!=0)
        {
            cout<<x*y+(x/3)*z<<endl;
        }
        else{
            cout<<x*y+((x-1)/3)*z<<endl;
        }
	}

}
