#include<iostream>
using namespace std;

class  Animal {
public:
    void eat(){
        cout << "eats\n";
    }

    void breathe(){
        cout << "breathes\n";
    }
};

class Bird : public Animal {
public:
    void fly(){
        cout << "fly\n";
    }
};

class Fish : public Animal {
public:
    void swim(){
        cout << "swim\n";
    }
};

class Mammal : public Animal {
public:
    void walk(){
        cout << "walks\n";
    }
};


int main(){
    Mammal m1;
    m1.breathe();
    m1.eat();
    m1.walk();

    Fish f1;
    f1.breathe();
    f1.eat();
    f1.swim();

    Bird b1;
    b1.breathe();
    b1.eat();
    b1.fly();
    

    return 0;
}