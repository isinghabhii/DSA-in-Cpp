#include<iostream>
using namespace std;

void func(){
    cout << "function called...\n";
    func();
}

int main(){
    func();
    return 0;
}