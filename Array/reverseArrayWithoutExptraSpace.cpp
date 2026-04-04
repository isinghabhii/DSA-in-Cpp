// without extra space (2 Pointer(idx) Approach)

#include<iostream>
using namespace std;

void printArr(int *arr, int n){
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    int arr[] = {5, 4, 3, 9, 2};
    int n = sizeof(arr) / sizeof(int);

    int start = 0, end = n-1;

    while(start < end){
        //swap
        // int temp = arr[start];
        // arr[start] = arr[end];
        // arr[end] = temp;

        swap(arr[start], arr[end]); // inbuilt function

        start++;
        end--;
    }

    printArr(arr, n);
    return 0;
}

// sc = O(1)
// TC = O(n)