#include<iostream>
using namespace std;

// function overloading -> multiple functions with the same name but different parameters 

int sum(int a, int b){
    cout << (a + b) << endl;
}

double sum(double a, double b){
    cout << (a + b) << endl;
}

int sum(int a, int b, int c){
    cout << (a + b + c) << endl;
}

int main(){
    sum(2, 3);
    sum(12, 13);
    sum(1.5, 2.5); // 4
    sum(1, 2, 3);
    return 0;
}