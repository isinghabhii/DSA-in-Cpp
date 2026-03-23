#include<iostream>
using namespace std;

int main(){
    int *ptr = NULL;
    cout << ptr << "\n";

    // cout << *ptr << "\n"; //segmentation fault 
    // dereferencing Null pointer is not possible as it'll result in error.  
    return 0;
}