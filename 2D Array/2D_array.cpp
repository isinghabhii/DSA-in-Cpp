#include<iostream>
using namespace std;

int main(){
    // int students[3][3] = {{100, 100, 100},
    //                       {85, 74, 89},
    //                       {63, 72, 65}};
    
    // cout << students[1][1] << endl; 

    int arr[3][4]; // n(rows)=3, m(columns)=4
    int n=3, m=4;

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> arr[i][j]; //0,0 0,1 0,2 0,3 1,0 1,2 ...
        }
    }
    
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}

// A 2D array is represented as a contiguous block of memory cells (linearly).