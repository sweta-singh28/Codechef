#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b,c,m;
	    cin>>a>>b>>c>>m;
    if((a<=b&&a+m>=b)||(a<=c&&a+m>=c)){
        cout<<"YES"<<endl;
    }
    else if ((b <= a && b + m >= a) || (b <= c && b + m >= c))
    {
        cout<<"YES"<<endl;
    }
    else if ((c <= b && c + m >= b) || (c <= a && c + m >= a))
    {
        cout<<"YES"<<endl;
    }
    else {
        cout<<"NO"<<endl;
    }
	    
	}

}
