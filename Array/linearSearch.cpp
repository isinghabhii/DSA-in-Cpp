#include<iostream>
using namespace std;

int linerSearch(int *arr, int n, int key){  //TC = O(n)
    for(int i=0; i<n; i++){
        if(arr[i] == key){ // FOUND
            return i;
        }
    }
    return -1; // NOT FOUND
}

int main(){
    int arr[] = {2, 4, 6, 8, 10, 12, 14, 16};
    int n = sizeof(arr) / sizeof(int);

    cout << linerSearch(arr, n, 10) << endl;
    return 0;
}