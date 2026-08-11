#include<iostream>
using namespace std;

// Function overloading
class Print {
public:
    void show(int x){
        cout << "int: " << x << endl;
    }

    void show(string str){
        cout << "String: " << str << endl;
    }
};


class Complex {
    private:
        int real;
        int img;
    public:
        Complex(int r, int i){
            real = r;
            img = i;
        }

        void showNum(){
            cout << real << " + " << img  <<"i \n";
        }

        // Operator Overloading
        Complex operator + (Complex &c2){
            int resReal = this->real + c2.real;
            int resImg = this->img + c2.img;
            Complex c3(resReal, resImg);
            return c3;
        }
};

// Function Overriding
class Parent {
    public:
        void show(){
            cout << "Parent class show..\n";
        }

        virtual void hello (){ // virtual functions
            cout << "Parent hello\n";
        }
};

class Child : public Parent {
    public:
        void show(){
            cout << "child class show..\n";
        }

        void hello (){ // virtual functions redefined in child class
            cout << "Child hello\n";
        }
}; 




int main(){
    // Print obj1;
    // obj1.show(25);
    // obj1.show("Hello");

    // Complex c1(1,2);
    // Complex c2(3, 4);
    // c1.showNum();
    // c2.showNum();

    // Complex c3 = c1 + c2;
    // c3.showNum();

    Child child1;
    // child1.show();
    Parent *ptr;

    ptr = &child1; // Run time Binding
    ptr->hello(); // Virtual Function

    return 0;
}