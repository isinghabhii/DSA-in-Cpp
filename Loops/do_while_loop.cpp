#include<iostream>
using namespace std;

int main(){
    int i=1;
    // do{
    //     cout << i << " ";
    //     i++;
    // } while (i <= 5);

    // cout << endl;

    do {
        cout << "Apna college in do-while loop" << endl;
    } while(i > 5);

    while(i > 5){
        cout << "Apna college in while loop";
    }
    return 0;
}