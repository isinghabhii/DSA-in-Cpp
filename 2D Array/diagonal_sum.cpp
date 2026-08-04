// Microsoft, Samsung, Amazon

#include<iostream>
using namespace std;

void DiagonalSum(int matrix[][4], int n){
    int sum = 0;

    // TC: O(n^2)
    // for(int i=0; i<n; i++){ //rows
    //     for(int j=0; j<n; j++){ //cols
    //         if(i == j){
    //             sum += matrix[i][j];
    //         } else if(j == n-i-1){
    //             sum += matrix[i][j];
    //         }
    //     }
    // }

    //TC: O(n)
    for(int i=0; i<n; i++){
        sum += matrix[i][i]; //pd
        if(i != n-i-1){
            sum += matrix[i][n-i-1]; //sd
        }
    }

    cout << "Sum = " << sum << endl;
}

int main(){
    int matrix[4][4] = {{1, 2, 3, 4},
                        {5, 6, 7, 8},
                        {9, 10, 11, 12},
                        {13, 14, 15, 16}};

    int matrix2[3][3] = {{1, 2, 3},
                        {4, 5, 6},
                        {7, 8, 9}};

    DiagonalSum(matrix, 4);

    return 0;
}