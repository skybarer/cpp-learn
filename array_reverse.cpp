#include <bits/stdc++.h>
using namespace std;

// method declration
void randArray(vector<int> &arr, int size);
void arrayPrint(vector<int> &arr, int size);
void arryReverse(vector<int> &arr, int size);

void randArray(vector<int> &arr, int size) {
    for(int i = 0; i < size; i++){ 
        arr[i] = (rand() % 100) + 1; 
    }
}

void arrayPrint(vector<int> &arr, int size) {
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " "; 
    }
    cout << endl;
}

    // swapping an array without using extra space
void arryReverse(vector<int> &arr, int size) {
    for (int i = 0, j = size-1; i < size/2; i++, j--) {
        swap(arr[i], arr[j]);
    }
}


int main() {
    int size = 10;
    vector<int> arr(size);
    randArray(arr, size);
    // printing array before reverse
    arrayPrint(arr, size);
    // reversing an array
    arryReverse(arr, size);
     // printing array after reverse
    arrayPrint(arr, size);
    
}