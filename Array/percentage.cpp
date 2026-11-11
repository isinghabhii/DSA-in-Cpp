#include<iostream>
using namespace std;

int main(){
    int marks[5] = {75, 80, 90, 95, 100};
    int sum = 0;

    for(int i=0; i<5; i++){
        sum += marks[i];
    }

    float percentage = (sum/500.0) * 100;

    cout << "Percentage: " << percentage << endl;
    return 0;
}