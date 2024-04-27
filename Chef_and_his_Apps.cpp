#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int TotalStorage,FirstApp, SecondApp, ThirdApp, left;
	    cin>>TotalStorage>>FirstApp>>SecondApp>>ThirdApp;
	    left = TotalStorage-(FirstApp + SecondApp);
	    if(left>=ThirdApp){
	        cout<<"0"<<endl;
	    }
	    else if(left<ThirdApp){
	        if(left+FirstApp >= ThirdApp || left+SecondApp >= ThirdApp){
	            cout<<"1"<<endl;
	        }
	        else{
	            cout<<"2"<<endl;
	        }
	    }
	    	}
}
