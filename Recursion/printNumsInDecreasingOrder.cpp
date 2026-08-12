#include<iostream>
using namespace std;

void print(int n){
    if(n == 0){
        return;
    }

    cout << n << " "; //kaam
    print(n-1); // faith, next call
    
    // Increasing Order
    // print(n-1);  
    // cout << n << " ";
}

int main(){
    print(5);

    return 0;
}