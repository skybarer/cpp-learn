#include <bits/stdc++.h>
using namespace std;


void rand(vector<int> &arr, int n) {
    for (int i = 0; i < n; i++) arr[i] = (rand() % 100) + 1;
}

void printArray(vector<int> &arr, int n) {
    for (int i = 0; i < n; i++) cout << arr[i] << " "; cout << endl;
}

int main() {
    int size = 10;
    vector<int> arr(10);

    // add rand ele into the array
    rand(arr, size);
    // print elements 
    printArray(arr, size);
    // find the min and max in array
    int mn = INT_MAX, mx = INT_MIN;
    for (int i = 0; i < size; i++) {
        mn = min(mn, arr[i]);
        mx = max(mx, arr[i]);
    }

    cout << "Min ele : " << mn << endl;
    cout << "Max ele : " << mx << endl;


    cout << "Min ele : " << *min_element(arr.begin(), arr.end()) << endl;
    cout << "Max ele : " << *max_element(arr.begin(), arr.end()) << endl;
    
}