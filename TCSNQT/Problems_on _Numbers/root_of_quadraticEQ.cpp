#include <iostream>
#include <cmath>
using namespace std;

class Solution {
public:
    void Roots(int a, int b, int c) {
        double d = b * b - 4.0 * a * c;

        if (d > 0) {
            cout << "Roots are real and different\n";

            double root1 = (-b + sqrt(d)) / (2.0 * a);
            double root2 = (-b - sqrt(d)) / (2.0 * a);

            cout << root1 << "\n" << root2 << endl;
        }
        else if (d == 0) {
            cout << "Roots are real and same\n";

            double root = -b / (2.0 * a);

            cout << root << "\n" << root << endl;
        }
        else {
            cout << "Roots are complex\n";

            double real = -b / (2.0 * a);
            double imag = sqrt(-d) / (2.0 * a);

            cout << real << " + i" << imag << endl;
            cout << real << " - i" << imag << endl;
        }
    }
};

int main() {
    int a = 1, b = -3, c = -10;

    Solution obj;
    obj.Roots(a, b, c);

    return 0;
}