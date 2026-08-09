#include<iostream>
using namespace std;

bool isPowerOf2(int num){
    if(!(num & (num-1))){
        return true;
    } else {
        return false;
    }
}

int main(){
    cout << isPowerOf2(4) << endl; // 1 => true
    cout << isPowerOf2(16) << endl;
    cout << isPowerOf2(13) << endl; // 0 => false
    cout << isPowerOf2(7) << endl;
    return 0;
}