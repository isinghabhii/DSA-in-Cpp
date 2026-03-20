#include<iostream>
using namespace std;

int sum(int a, int b=1){  // a, b are parameters
    int sum = a + b;
    return sum;
}

int diff(int a, int b){  // a, b are parameters
    int sum = a - b;
    return sum;
}

int main(){
    int add = sum(3, 4); //3, 4 are arguments
    cout << "sum = " << add << endl;

    int sub = diff(4, 3);
    cout << "sub = " << sub << endl;
    return 0;
}