#include<iostream>
using namespace std;

int main(){
    int a = 6, b = 10;

    cout << "Bitwise AND(&): " << (a & b) << endl;
    cout << "Bitwise OR(|): " << (a |  b) << endl;
    cout << "Bitwise XOR(^): " << (a ^  b) << endl;
    cout << "Bitwise Left Shift Operator(<<): " << (10 << 2) << endl;
    cout << "Bitwise Right Shift Operator(>>): " << (10 >> 1) << endl;

    // Operator Precedence
    cout << (5 - 2 * 6) << endl;
    cout << ((5 - 2) * 6) << endl;
    cout << (4 * 5 % 2) << endl; // left to right move

    return 0;
}