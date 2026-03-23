// Refernce variables => is an alternate name(alias) of already existing variable.

#include<iostream>
using namespace std;

//Pass by refernce using Reference variable
void changeA(int &param){
    param = 20;
    cout << param << "\n";
}

int main(){
    int a = 10;
    // int &b = a; // reference variable always intialize // a & b refer to the same location in memory
    // b = 25;
    // cout << b << "\n";
    // cout << a << "\n";

    changeA(a);
    cout << a << "\n";
}
