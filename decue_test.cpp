#include <bits/stdc++.h>

using namespace std;

const int MX = 1000005;
int dat[2*MX+1];
int head = MX, tail = MX;

void push_front(int x) {
    dat[head--] = x;
}

void push_back(int x) {
    dat[tail++] = x;
}

void pop_front() {
    head++;
}

void pop_back() {
    tail--;
}

int front() {
    return dat[head];
}

int back() {
    return dat[tail-1];
}

void test() {
    push_front(1);
    push_back(3);
    push_back(4);
    pop_back();
    cout << front() << '\n';
}

int main(void) {
    test();
}