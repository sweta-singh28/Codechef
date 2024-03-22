#include <iostream>
#include <iomanip>
using namespace std;

double calculate_balance(int X, double Y) {
   
    if (X % 5 != 0) {
        return Y;
    }
    
    double total_deduction = X + 0.50;
    
    if (total_deduction > Y) {
        return Y;
    }
    double remaining_balance = Y - total_deduction;
    return remaining_balance;
}

int main() {
    int X;
    double Y;
    cin >> X >> Y;
    cout << fixed << setprecision(2) << calculate_balance(X, Y) << endl;

    return 0;
}
