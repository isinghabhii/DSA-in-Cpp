#include<iostream>
#include <algorithm>
using namespace std;

void print(int arr[], int n){
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}


int main(){
    int arr[8] = {1, 4, 1, 3, 2, 4, 3, 7};
    // sort(arr, arr+8); //ascending order
    // sort(arr+2, arr+5);

    sort(arr, arr+8, greater<int>()); //descending order

    print(arr, 8);
    return 0;
}

// inbuilt sort : TC => O(n logn)