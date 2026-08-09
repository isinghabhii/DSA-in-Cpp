#include<iostream>
using namespace std;

int main(){
    cout << ( 7 << 2 ) << endl; // left shift 
    cout << ( 7 >> 2 ) << endl; // right shift 

    return 0;
}

// left shift : a << b => a * 2^b

// right shift : a >> b => a / 2^b