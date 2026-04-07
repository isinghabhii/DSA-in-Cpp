#include<iostream>
using namespace std;

//1. Brute Force Approach => TC: O(n^3)
void maxSubarraySum1(int *arr, int n){
    int maxSum = INT8_MIN;

    for(int start=0; start<n; start++){
        for(int end=start; end<n; end++){
            int currSum = 0;
            for(int i=start; i<=end; i++){
                currSum += arr[i];
            }
            cout << currSum << ", ";
            maxSum = max(maxSum, currSum);
        }
        cout << endl; 
    }

    cout << "maximum subarray sum = " << maxSum << endl;
}

//2. Slightly Optimized => TC:O(n^2)
void maxSubarraySum2(int *arr, int n){
    int maxSum = INT8_MIN;

    for(int start=0; start<n; start++){ //start = 2
        int currSum = 0;
        for(int end=start; end<n; end++){ //end = 2, 3, 4, 5
            currSum += arr[end];
            maxSum = max(maxSum, currSum);
        }
    }

    cout << "maximum subarray sum = " << maxSum << endl;
}


int main(){
    int arr[6] = {2, -3, 6, -5, 4, 2};
    int n = sizeof(arr) / sizeof(int);

    maxSubarraySum2(arr, n);
    return 0;
}