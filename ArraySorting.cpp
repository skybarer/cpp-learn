#include <bits/stdc++.h>
using namespace std;

void randArray(vector<int> &arr, int n) {
    for (int i = 0; i < n; i++) arr[i] = (rand() % 3);
}

void printArray(vector<int> &arr, int n) {
    for (int i = 0; i < n; i++) cout << arr[i] << " "; cout << endl;
}

int main() {
    int size = 20;
    vector<int> arr(size);
    // generate random 0's, 1's, 2's 
    randArray(arr, size);
    printArray(arr, size);

    // sort all 0's, 1's and 2's
    vector<int> pos(3);
    for(auto i : arr) pos[i]++;

    // print pos array
    printArray(pos, 3);

    for (int i = 0; i < 3; i++) {
        while(pos[i] > 0) {
            cout << i << " ";
            pos[i]--;
        }
    }
    cout << endl;
}