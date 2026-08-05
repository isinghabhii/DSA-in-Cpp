// Print out the sum of the numbers in the second row of the "nums" array.

#include<iostream>
using namespace std;

int main(){
    int nums[][3] = {{1, 4, 9},
                   {11, 4, 3},
                    {2, 2, 3}};
    
    int n = 3, m = 3;
    int sum = 0;

    for(int j=0; j<m; j++){
        sum += nums[1][j];
    }

    cout << "Sum of the numbers in second row : " << sum << endl;

    return 0;
}
