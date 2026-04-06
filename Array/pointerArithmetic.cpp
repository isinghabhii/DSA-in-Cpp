#include<iostream>
using namespace std;

void printArr(int *ptr, int n){
    for(int i=0; i<n; i++){
        cout << *(ptr + i) << endl;
        // ptr = ptr + 1;
    }
}

int main(){
    // int a = 10;
    // int *aptr = &a;

    // cout << aptr << "\n";
    // // aptr++;
    // // cout << aptr << "\n";
    // // aptr--;
    // // cout << aptr << "\n";

    // aptr = aptr + 3;
    // cout << (aptr - 3) << "\n";

    // int arr[] = {1, 2, 3, 4, 5};
    // int n = sizeof(arr) / sizeof(int);
    // printArr(arr, n);

    // int a = 5;
    int arr[20] = {1, 2, 3, 4, 5, 6};
    int *ptr1 = arr;
    int *ptr2 = ptr1 + 3; //4

    cout << *ptr2 << endl; //4
    cout << *ptr1 << endl; //1

    cout << ptr2 - ptr1 << "\n";  // same type 

    cout << (ptr2 > ptr1) << "\n"; // yes: true: 1
    cout << (ptr2 < ptr1) << "\n"; // no: false: 0
    cout << (ptr1 == arr) << "\n"; // yes: true: 1
    return 0;
}