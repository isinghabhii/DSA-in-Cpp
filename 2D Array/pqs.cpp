// Print the number of all 7's that are in the 2d array.

#include<iostream>
using namespace std;

void printAllSeven(int arr[][3], int n, int m){
    int countOf7 = 0;

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(arr[i][j] == 7)
                countOf7++;
        }
    }

    cout << "count of 7 is: " << countOf7 << endl;
}

int main(){
    int arr[][3] = {{4, 7, 8},
                   {8, 8, 7}};

    printAllSeven(arr, 2, 3);
    return 0;
}