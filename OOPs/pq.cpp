#include<iostream>
using namespace std;

class A {
    public:
        A() {
            cout << "Constructor of Parent" << endl;
        }
        ~A(){
            cout << "Destructor of Parent" << endl;
        }
};

class B : public A {
    public:
        B() {
            cout << "Constructor of Child" << endl;
        }
        ~B(){
            cout << "Destructor of Child" << endl;
        }
};

int main(){
    B obj;
    return 0;
}

// first Parent class constructor call then child class constructor called
// child class destructor called then parent class destructor called