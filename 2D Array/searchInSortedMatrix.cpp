// Adobe, Oracle

#include<iostream>
using namespace std;

// Brute Force - O(n * m)
// void searchInSortedMatrix(int matrix[][4], int target){
//     int n = 4;
//     int m = 4;
    
//     for(int i=0; i<n; i++){
//         for(int j=0; j<m; j++){
//             if(matrix[i][j] == target){
//                 cout << "Target Found at (" << i << ", " << j << ")";
//                 return;
//             }
//         }
//     }

//     cout << "Target Not Found";

// }

// Row-wise Binary Search - Time Complexity: O(n × log m)
// void searchInSortedMatrix(int matrix[][4], int target) {
//     int rows = 4;
//     int cols = 4;

//     for (int i = 0; i < rows; i++) {
//         int low = 0;
//         int high = cols - 1;

//         while (low <= high) {
//             int mid = low + (high - low) / 2;

//             if (matrix[i][mid] == target) {
//                 cout << "Target Found at (" << i << ", " << mid << ")";
//                 return;
//             }
//             else if (matrix[i][mid] < target) {
//                 low = mid + 1;
//             }
//             else {
//                 high = mid - 1;
//             }
//         }
//     }

//     cout << "Target Not Found";
// }

// Staircase search - TC: O(n + m) => Better 
bool searchInSortedMatrix(int matrix[][4], int n, int m, int key) {
    int i = 0, j = m-1;

    while(i < n && j >= 0){
        if(matrix[i][j] == key){
            cout << "found at cell (" << i << "," << j << ")\n";
            return true;
        }
        else if(matrix[i][j] > key){
            //left
            j--;
        } 
        else {
            // down
            i++;
        }
    }

    cout << "key not found\n";
    return false;
}


int main(){
    int matrix[4][4] = {{10, 20, 30, 40},
                        {15, 25, 35, 45},
                        {27, 29, 37, 48},
                        {32, 33, 39, 50}};

    searchInSortedMatrix(matrix, 4, 4, 33);
    return 0;
}