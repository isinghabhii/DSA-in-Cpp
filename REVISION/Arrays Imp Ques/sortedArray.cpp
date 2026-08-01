#include<iostream>
using namespace std;

int isSorted(int *arr, int n){
    for(int i=1; i<n; i++){
        if(arr[i] >= arr[i-1]){
            
        } else {
            return false;
        }
    }
    return true;
}

int main(){
    int arr[] = {1, 2, 2, 3, 3, 4};
    int n = sizeof(arr) / sizeof(int);

    cout << isSorted(arr, n) << endl;
    return 0;
}

// TC: O(n)