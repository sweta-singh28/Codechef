#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int>arr(n);
	    for(int i=0; i<n; i++){
	        cin>>arr[i];
	    }
	    int count = 0;
	    for(int i=0; i<n; i++){
	        if(arr[i]>=1000){
	            count++;
	        }
	    }
	    cout<<count<<endl;
	}

}
