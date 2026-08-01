#include<iostream>
#include<algorithm>
using namespace std;

// Brute Force :- // TC: O(n logn), SC: O(1)

int main(){
    int arr[] = {3, 2, 1, 5, 2};
    int n = sizeof(arr) / sizeof(int);

    // sort(arr, arr+n);
    // cout << arr[n-1] << endl;

    int largest = arr[0]; //Optimal Soln => TC: O(n) => much better than brute force approach
    for(int i=0; i<n; i++){
        if(arr[i] > largest)
            largest = arr[i];
    }

    cout << "Largest Element: " << largest << endl;

    return 0;
} 

