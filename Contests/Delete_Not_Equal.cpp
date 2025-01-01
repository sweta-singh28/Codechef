#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;cin>>t;
    while(t--){
        long long n;
        cin >> n;

        string str;
        cin >> str;

        int ones = 0;
        int zeros = 0;

        for (int i = 0; i < n; i++)
        {
            if (str[i] == '0')
            {
                zeros++;
            }
            else if (str[i] == '1')
            {
                ones++;
            }
        }
        if (zeros != 0 && ones != 0)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << n << endl;
        }
    }
    

    return 0;
}