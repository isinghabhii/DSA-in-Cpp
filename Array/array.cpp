// Array => Linear collection of same type of elements that are stored together in contiguous memory spaces.
// Array's index(position) start from 0

// Creating an array => Memory is statically allocated (at compile time)

#include<iostream>
using namespace std;

int main(){
    int marks[5]= {1, 2, 3, 4, 5}; // 0 to 4
    cout << marks[0] << endl; //1
    cout << marks[1] << endl; //2
    cout << marks[2] << endl; //3

    cout << sizeof(marks) << endl; // 20B => 5 * 4B
    cout << sizeof(marks)/sizeof(int) << endl; // 20/4 => 5 => length of array

    double price[] = {90.99, 105.89, 30.00}; //3
    cout << price[0] << endl; //90.99
    return 0;
}