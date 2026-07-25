#include <iostream>
#include <climits>
using namespace std;

int main() {
    int nums[] = {5, 15, 22, 1, -15, 24};
    int size = 6;

    int smallest = INT_MAX;
    int largest = INT_MIN;
    int idx = -1, idx1 = -1;

    for (int i = 0; i < size; i++) {
        // smallest = min(nums[i], smallest);
        // largest = max(nums[i], largest);
        if (nums[i] < smallest) {
            smallest = nums[i];
            idx = i;
        }

        if (nums[i] > largest) {
            largest = nums[i];
            idx1 = i;
        }
    }


    cout << "Smallest = " << smallest << " at index = " << idx << endl;
    cout << "Largest = " << largest << " at index = " << idx1 << endl;

    return 0;
}