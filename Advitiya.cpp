#include <iostream>
#include <cmath>
using namespace std;

int minCharDistance(char from, char to) {
    if (from <= to) {
        return to - from;  // Normal forward distance
    } else {
        return (26 - (from - to));  // Wrap-around distance
    }
}

void solve() {
    string str;
    cin >> str;
    
    string target = "ADVITIYA";
    int totalCost = 0;

    for (int i = 0; i < target.length(); i++) {
        totalCost += minCharDistance(str[i], target[i]);
    }

    cout << totalCost << endl;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        solve();
    }

    return 0;
}