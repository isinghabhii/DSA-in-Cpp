#include<iostream>
using namespace std;

int binarySearch(int *arr, int n, int key){
    int start = 0, end = n-1;
    while(start <= end){
        int mid = (start + end) / 2;

        if(arr[mid] == key){
            return mid; // key found
        } else if (arr[mid] < key){ //2nd half
            start = mid + 1;
        } else { //1st half
            end = mid - 1;
        }
    }

    return -1;
}

int main(){
    int arr[] = {2, 4, 6, 8, 10, 12, 14, 16};
    int n = sizeof(arr) / sizeof(int);

    cout << binarySearch(arr, n, 12) << "\n";
    return 0;
}

// TC : O(log n)