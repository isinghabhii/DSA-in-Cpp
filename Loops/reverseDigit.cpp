// Print the digits of a given number in reverse using while loop.

// #include <iostream> 
// using namespace std;

// int main(){
//     int n = 10829;
    
//     while(n > 0){
//         int lastDigit = n % 10;
//         cout << lastDigit;
//         n = n / 10; // n /= 10;
//     }

//     cout << endl;
//     return 0;
// }

// Reverse a given number & print the result.
#include <iostream> 
using namespace std;

int main(){
    int n = 10829;
    int res = 0;
    
    while(n > 0){
        int lastDigit = n % 10;
        res = res * 10 + lastDigit;
        n = n / 10;
    }

    cout <<"reverse = " << res << endl;
    return 0;
}