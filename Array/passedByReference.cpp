// Arrays are passed by reference

/*
    void printArr(int arr[]){...}    -|
                                      | => Same
    void printArr(int *arr){...}     _|

    c++ array name ---> pointer
*/

#include<iostream>
using namespace std;

void func(int arr[]){
    arr[0] = 1000;
}

void func2(int *ptr){
    ptr[0] = 1000;
}

void printArr(int nums[], int n){
    //cout << sizeof(nums) << endl; // 4 => size of int pointer

    for(int i=0; i<n; i++){
        cout << nums[i] << ", ";
    }
    cout << endl;
}

int main(){
    int a =5;
    int *ptr = &a;
    // cout << ptr << endl; //0x

    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(int);
    cout << "array size = " << sizeof(arr) << endl; //20

    // cout << arr << endl;
    // cout << *arr << endl; //arr[0]
    // cout << *(arr+1) << endl; //arr[1]
    // cout << *(arr+2) << endl; //arr[2]

    // func(arr); // passing array name is equivalent to passing the pointer 
    // cout << arr[0] << endl;

    printArr(arr, n);

    return 0;
}
