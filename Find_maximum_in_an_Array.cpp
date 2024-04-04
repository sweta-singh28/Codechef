#include <bits/stdc++.h>
#include<limits.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>> t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int>a;
	    for(int i=0; i<n; i++){
	        int temp;
	        cin>>temp;
	        a.push_back(temp);
	    }
	    int maxi = INT_MIN;
	    for(int i=0; i<n; i++){
	        if(a[i]>maxi){
	            maxi = a[i];
	        }
	    }
	    cout<<maxi<<endl;;
	  
	}

}
