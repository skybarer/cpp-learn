#include <bits/stdc++.h>
using namespace std;

string randomString(int size) {
    string randStr;
    while(size) {
        char ch = (char)((rand() % 128) + 1);
        if(ch >= 'a' && ch <= 'z') {
            randStr +=  ch;
            size--;
        }
    }
return randStr;
}

int main() {
    int size = 50;
    string str = randomString(size);
    cout << str << endl;
    sort(str.begin(), str.end());
    cout << str << endl;

    char d = str[0];
    int count = 0;
    for(char c : str) {
        if(d == c) {
            count++;
        } else {
            cout << d << "->" << count << endl;
            count = 1;
            d = c;
        }
    }
    cout << d << "->" << count << endl;

}