//Qs. Sort this array of characters using insertion sort in descending order.

#include<iostream>
using namespace std;

void print(char arr[], int n){
    for(int i=0; i<n; i++){
        cout << arr[i] << " , ";
    }
    cout << endl;
}

// inserion sort logic in descending order
// TC => O(n^2)

void sortChar(char arr[], int n){

    for(int i=1; i<n; i++){
        int curr = arr[i];
        int prev = i - 1;
        while(prev >= 0 && arr[prev] < curr){
            swap(arr[prev], arr[prev + 1]);
            prev--;
        }   
        arr[prev + 1] = curr;
    }
    
    print(arr, n);
}

int main(){
    char ch[6] = {'f', 'b', 'a', 'e', 'c', 'd'};
    sortChar(ch, 6);

    return 0;
}

// 1 < 2 => true
// 1 > 2 => false

// 'a' < 'b' => true
// 'a' > 'b' => false