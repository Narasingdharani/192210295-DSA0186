#include <iostream>
using namespace std;

bool isPerfect(int num) {
    int sum = 0;
    for (int i = 1; i < num; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }
    return (sum == num);
}

int main() {
    int lower, upper;
    cout << "Enter lower bound: ";
    cin >> lower;
    cout << "Enter upper bound: ";
    cin >> upper;

    cout << "Perfect numbers between " << lower << " and " << upper << " are: " << endl;
    for (int i = lower; i <= upper; i++) {
        if (isPerfect(i)) {
            cout << i << endl;
        }
    }

    return 0;
}
