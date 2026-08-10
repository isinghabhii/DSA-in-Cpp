#include<iostream>
using namespace std;

class Student{
    //Properties
    string name;
    float cgpa;

    //Methods
    void getPercentage(){
        cout << (cgpa * 10) << "% \n";
    }
};

class User {
    int id;
    string username;
    string password;
    string bio;

    void deactivate(){
        cout << "deleting account\n";
    }

    void editBio(string newBio){
        bio = newBio;
    }
};

int main(){
    Student s1; //object
    cout << sizeof(s1);
    return 0;
}