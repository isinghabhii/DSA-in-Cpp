// WAF to reverse an Integer n.

#include <iostream>
using namespace std;

int reverseNumber(int n) {
    int reverse = 0;

    while (n != 0) {
        int digit = n % 10;
        reverse = reverse * 10 + digit;
        n = n / 10;
    }

    return reverse;
}

int main() {
    int n, rev;

    cout << "Enter an integer: ";
    cin >> n;

    rev = reverseNumber(n);   // Store reversed number in another variable

    cout << "Original Number: " << n << endl;
    cout << "Reversed Number: " << rev << endl;

    return 0;
}