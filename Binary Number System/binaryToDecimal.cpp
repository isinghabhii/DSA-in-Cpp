#include<iostream>
using namespace std;

void BinaryToDecimal(int binNum){
    int n = binNum;
    int decNum = 0;
    int pow = 1; // 2^0 2^1 2^2...

    while(n > 0){
        int lastDigit = n % 10;
        decNum += lastDigit * pow;
        pow = pow * 2;
        n = n/10;
    }

    cout << decNum << endl;
}

int main(){
    BinaryToDecimal(1011);

    return 0;
}