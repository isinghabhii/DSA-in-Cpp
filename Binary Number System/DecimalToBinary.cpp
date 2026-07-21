#include<iostream>
using namespace std;

int DecimalToBinary(int decNum){
    int n = decNum;
    int pow = 1; // 10^0 10^1 10^2...
    int binNum = 0;

    while(n > 0){
        int rem = n % 2;
        binNum += rem * pow;
        n = n/2;
        pow = pow * 10;
    }

    // cout << "binary of " << decNum << " = " << binNum << endl;
    return binNum;
}

int main(){
    // DecimalToBinary(10);

    for(int i = 1; i <= 10; i++){
        cout << DecimalToBinary(i) << endl;
    }
    return 0;
}