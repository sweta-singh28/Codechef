#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int arr[4];
	for(int i =0; i<4; i++){
	    cin>>arr[i];
	}
	int count = 0;
	for(int i=0; i<4; i++){
	    if(arr[i]>=10){
	       count++;
	   }
	}
    cout<<count;
}