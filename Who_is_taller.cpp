#include<iostream>
using namespace std;

int main(){
    int T;
    cin>>T;
     while (T--)
     {
        int a, b;
        cin>>a;
        cin>>b;
        if (a>b)
        {
            cout<<"A"<<endl;
        }
        else{
            cout<<"B"<<endl;
        }
     }
     
    return 0;
}