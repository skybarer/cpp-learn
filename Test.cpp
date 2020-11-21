#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node *next;
};

struct LinkedList {
    void push();
    void insertFirst();
    void insetLast();
    void pop();
    int size();
    bool empty();
};

int main() {
    cout << "Hello World" << endl;
}