#include<iostream>
#include<string>
using namespace std;

class User{
    private:
        int id;
        string password;

    public:
        string username;
    
    User(int id){
        this->id = id;  // left wla -> object ka id h.. // right wla paramter hta h
    }

    // setter
    void setPassword(string password){
        this->password = password;
    }

    // getter
    string getPassword(){
        return password;
    }

};

int main(){
    User user1(101);
    user1.username = "Abhishek";
    user1.setPassword("1234");

    cout << "username: " << user1.username << endl;
    cout << "password: " << user1.getPassword() << endl;
    return 0;
}