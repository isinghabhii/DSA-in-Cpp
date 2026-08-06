#include<iostream>
#include<cstring>
using namespace std;

int main(){
    char str1[100];
    char str2[100] = "hello world";
    // str1 = "Abhishek Singh";
    // strcpy(str1, "Abhishek Singh");
    strcpy(str1, str2);
    cout << str1 << endl;

    char str3[100] = "Hello ";
    char str4[100] = "Abhishek";
    cout << strcat(str3, str4) << endl;

    char str5[100] = "abc";
    char str6[100] = "abc";

    cout << strcmp(str5, str6) << endl;
    return 0;
}