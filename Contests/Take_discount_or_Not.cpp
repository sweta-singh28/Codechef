#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,x,y;
        cin>>n>>x>>y;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        // your code goes here
        int noDiscount = 0;
        for(int i=0; i<n; i++){
            noDiscount += a[i];
        }
        int discount = x;
        for(int i=0; i<n; i++){
            if(a[i]>y){
                discount += a[i]-y;
            }
        }
        if(discount<noDiscount){
            cout<<"COUPON"<<endl;
        }
        else{
            cout<<"NO COUPON"<<endl;
        }
        
        
    }

}
