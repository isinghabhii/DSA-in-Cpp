#include<iostream>
using namespace std;

// function => Block of code which runs when it is called.

void sayHello(){
    cout << "Hello :)\n";
}

void assistant(){
    sayHello();
    cout << "work done \n";
}

int main(){
    assistant(); //function call
    return 0;
}