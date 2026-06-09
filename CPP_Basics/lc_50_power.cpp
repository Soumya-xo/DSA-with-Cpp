#include <iostream>
using namespace std;

double power(double x, int n) {
    long long N = n;   

    if (N < 0) {
        x = 1 / x;
        N = -N;
    }

    double ans = 1.0;

    while (N > 0) {
        if (N & 1) {     
            ans *= x;
        }
        x *= x;           
        N >>= 1;          
    }

    return ans;
}

int main() {
    double x;
    int n;

    cout << "Enter base (x): ";
    cin >> x;

    cout << "Enter power (n): ";
    cin >> n;

    cout << "Result: " << power(x, n) << endl;

    return 0;
}
