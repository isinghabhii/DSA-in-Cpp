#include<iostream>
#include<string>
using namespace std;

class Car {
    public:
        string name;
        string color;
    
    Car(string name , string color){
        this->name = name;
        this->color = color;
    }

    Car(Car &original){
        cout << "copying original to new..\n";
        name = original.name;
        color = original.color;
    }
};

int main(){
    Car c1("maruti 800", "blue");
    
    Car c2(c1); //custom copy constructor
    cout << c2.name << endl; //maruti 800
    cout << c2.color << endl; // blue
    return 0;
}