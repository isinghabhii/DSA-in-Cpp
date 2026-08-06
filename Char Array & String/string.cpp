#include<iostream>
#include<string>
using namespace std;

int main(){
    // string str = "hello";
    // cout << str << endl;
    // str = "yellow"; 
    // cout << str << endl;

    // string str;
    // getline(cin, str);
    // cout << str[0] << endl;
    // cout << str[1] << endl;
    // cout << str[2] << endl;

    string str = "Abhishek Singh";

    // for(int i=0; i<str.length(); i++){
    //     cout << str[i] << " ";
    // }
    // cout << "\n";

    //for each loop
    // for (char ch : str){
    //     cout << ch << " ";
    // }
    // cout << "\n";

    cout << str.length() << endl;
    cout << str[3] << endl;
    cout << str.at(3) << endl;
    cout << str.substr(0, 3) << endl;
    cout << str.find("Singh"); // return idx => 1st occurance
    return 0;
}