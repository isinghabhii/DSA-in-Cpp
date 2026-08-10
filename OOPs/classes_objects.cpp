#include<iostream>
using namespace std;

class Student{
    private:
        //Properties
        string name;
    public:
        float cgpa;

        //Methods
        void getPercentage(){
            cout << (cgpa * 10) << "% \n";
        }
};

// class User {
//     int id;
//     string username;
//     string password;
//     string bio;

//     void deactivate(){
//         cout << "deleting account\n";
//     }

//     void editBio(string newBio){
//         bio = newBio;
//     }
// };

int main(){
    Student s1; //object
    // cout << sizeof(s1);
    // s1.name = "Abhishek";
    s1.cgpa = 9.0;
    cout << s1.cgpa << endl;
    s1.getPercentage();
    return 0;
}