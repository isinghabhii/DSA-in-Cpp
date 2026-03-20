#include<iostream>
using namespace std;

// scope => area where a var can be accessed or used 
// Local vs Global scope of variables

int num = 25; // global scope variable

void sum(int a, int b){
    // if(a >= 1){
    //     int x = 24; // local scope
    // }
    // cout << x;

    // {
    //     int x = 25;
    // }
    // cout << x;

    cout << num << endl;
    int s = a + b;
    cout <<"sum = " << s << endl;
}

int main(){
    sum(4, 3);
    int s = 10;
    cout << num;
    return 0;
}