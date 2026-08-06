#include<iostream>
#include <cstring>   // Required for strlen()
using namespace std;

int main(){
    char arr[5] = {'c', 'o', 'd', 'e', '\0'}; // explicitly terminated by null characters '\0'
    // always char arr terminated by \0.
    // char arr value is not fixed, it can modify
    // cout << arr << endl; 

    // "apna college" // string literals
    // "helloworld" // string literals
    // "a" // string literals

    // string literals are not terminated by \0.
    // literal is anything, whose value is fixed

    // char work[] = "code";
    // cout << work << endl;

    char work[50] = {'c', 'o', 'd', 'e', '\0'};
    cout << strlen(work) << endl;

    return 0;
}