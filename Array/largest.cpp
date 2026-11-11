
#include <iostream>
using namespace std;

int main() {
    int arr[5] = {25, 10, 45, 5, 90};

    int largest = arr[0];
    int smallest = arr[0];

    for(int i = 1; i < 5; i++) {

        if(arr[i] > largest) {
            largest = arr[i];
        }

        if(arr[i] < smallest) {
            smallest = arr[i];
        }
    }

    cout << "Largest Number: " << largest << endl;
    cout << "Smallest Number: " << smallest << endl;

    return 0;
}
