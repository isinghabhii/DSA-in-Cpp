#include <iostream>
#include<vector>
using namespace std;


// Brute Force -> TC: O(n)
void PairSum(int *arr, int n, int target){
    
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {

            if (arr[i] + arr[j] == target) {
                cout << "Pair: " << arr[i] << ", " << arr[j] << endl;
            }

        }
    }
}


// 2 Pointer Approach -> TC:O(n)
vector<int> pairSum(vector<int> arr, int target){
    int st = 0, end = arr.size()-1;
    int currSum = 0;
    vector<int> ans;

    while(st < end){
        currSum = arr[st] + arr[end];
        if(currSum == target){
            ans.push_back(st);
            ans.push_back(end);
            return ans;
        } else if(currSum > target){
            end--;
        } else {
            st++;
        }
    }

    return ans;
}

int main() {
    // int arr[] = {2, 7, 11, 15};
    // PairSum(arr, 4, 9);

    vector<int> vec = {2, 7, 11, 15};
    int target = 9;
    vector<int> ans = pairSum(vec, target);
    cout << ans[0] << "," << ans[1] << endl;
    
    return 0;
}