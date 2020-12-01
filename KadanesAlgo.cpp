#include <bits/stdc++.h>
using namespace std;

// kadhanes algo states 
// the maximum subarry is the subarray with previous sum or the current element itself

void printArray(vector<int> &arr, int n) {
    for (int i = 0; i < n; i++) cout << arr[i] << " "; cout << endl;
}

int main() {
    int n = 8;
    vector<int> arr =  {-2, -3, 4, -1, -2, 1, 5, -3};
    // printing array
    printArray(arr, n);

    int lm = arr[0], gm = arr[0];
    for (int i = 1; i < n; i++) {
        lm = max(arr[i], arr[i] + lm);
        gm = max(lm, gm);
    }

    cout << "Max subarray Sum :" << gm << endl;
}