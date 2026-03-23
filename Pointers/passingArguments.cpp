#include<iostream>
using namespace std;

// void changeA(int param){ //Pass by value -> when parameter is a copy of actual argument variable in memory.
//     param = 20;
//     cout << param << "\n";
// }

//Pass by reference using Pointer
void changeB(int *ptr){ // Pass by reference (pass by address) -> when we pass the refernce of argument to the function.
    *ptr = 20;
    cout << *ptr << "\n";
}

int main(){
    int a = 10;
    // changeA(a);
    // cout << a << "\n";

    changeB(&a);
    cout << a << "\n";

    return 0;
}