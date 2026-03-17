// Print numbers from 1 to n

#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "enter your n : ";
    cin >> n;

    for(int i=1; i<=n; i++){
        cout << i << " ";
    }
    
    cout << endl;
    return 0;
}