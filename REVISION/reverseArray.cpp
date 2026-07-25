// without extra space (2 Pointer Approach)

#include<iostream>
using namespace std;

void reverseArray(int arr[], int sz){
    int start = 0, end = sz - 1;
    while(start < end){
        swap(arr[start], arr[end]);
        // int temp = arr[start];
        // arr[start] = arr[end];
        // arr[end] = temp;
        start++;
        end--;
    }
}

int main(){
    int arr[] = {4, 2, 7, 8, 1, 2, 5};
    int sz = sizeof(arr) / sizeof(int);

    reverseArray(arr, sz);

    for(int i=0; i<sz; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}

// SC = O(1)
// TC = O(n)