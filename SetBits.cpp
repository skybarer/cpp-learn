#include <bits/stdc++.h>
using namespace std;

int main() {
    // srand(time(NULL));
    // int num  = rand() % 50;
    // cout << "Num : " << num << endl;

    // int setBits = 0;

    // // int n = (int)(log(num) / log(2));
    // // cout << "log N : " << n << endl;

    // // for (int i = 0; i <= n; i++) {
    // //     if(num & (1 << i)) setBits++;
    // // }
    // while(num) {
    //     setBits += (num & 1);
    //     num >>= 1;
    // }

    // cout << "setBits : " << setBits << endl;

    // cout << "===============" << endl;

    for (int i = 0; i < 20; i++) cout << i << "==> " << __builtin_popcount(i) << endl;



}