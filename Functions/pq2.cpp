#include<iostream>
using namespace std;

//even -> true(1); odd -> false(0)

bool isEven(int n){
    if(n % 2 == 0){
        return true;
    } else {
        return false;
    }
}

int main(){
    int num;
    cout << "Enter a num : ";
    cin >> num;

   cout << isEven(num) << endl;

    return 0;
}