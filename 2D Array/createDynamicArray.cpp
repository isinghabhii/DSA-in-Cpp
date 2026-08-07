#include<iostream>
using namespace std;

void funcInt(){
    int *ptr = new int;
    *ptr = 5;

    cout << *ptr;

    delete ptr;
}

void func(){
    // int arr[100] = {1, 2, 3, 4, 5};
    // for(int i=0; i<5; i++){
    //     cout << arr[i] << " ";
    // }
    // return;

    // int arr[100] = {1, 2, 3, 4, 5};  // static 

    int size;
    cin >> size;

    int *ptr = new int[size]; // dynamic

    int x = 1;
    for(int i=0; i<size; i++){
        ptr[i] = x;
        cout << ptr[i] << " ";
        x++;
    }
    cout << endl;

    delete [] ptr; // free
}

int main(){

    funcInt();

    // cout << arr[0] << endl;

    return 0;
}