#include <iostream>
using namespace std;

int main() {
    int a, b, gcd;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    do {
        if (a > b)
            a -= b;
        else
            b -= a;
    } while (a != b);

    gcd = a;
    cout << "GCD is: " << gcd << endl;
    return 0;
}
