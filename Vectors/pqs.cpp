#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v; // size = 0, capacity = 0
    for(int i=0; i<5; i++){
        v.push_back(i);
    }

    cout << v.size() << endl; // size = 5
    cout << v.capacity() << endl; // capacity = 8
    return 0;
}