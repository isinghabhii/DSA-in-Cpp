#include<iostream>
using namespace std;

int product(int a, int b){;
    return a * b;
}

int main(){
    int a, b;
    cout << "Enter a : " ;
    cin >> a;

    cout << "Enter b : ";
    cin >> b;

    int res = product(a, b);
    cout << "Product of two num is = " << res << endl;

    return 0;
}