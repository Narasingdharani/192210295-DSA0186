
#include <iostream>
#include <cmath>


int sumOfDigits(int num, int power) {
    int sum = 0;
    while (num != 0) {
        int digit = num % 10;
        sum += pow(digit, power);
        num /= 10;
    }
    return sum;
}


bool isNarcissistic(int num) {
    int digits = 0;
    int temp = num;
    while (temp != 0) {
        temp /= 10;
        digits++;
    }
    return sumOfDigits(num, digits) == num;
}

int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;
    if (isNarcissistic(num)) {
        std::cout << num << " is a narcissistic number." << std::endl;
    } else {
        std::cout << num << " is not a narcissistic number." << std::endl;
    }
    return 0;
}
