//In call by value  a copy of variable will passes to function
// Changes inside the function will not affect the original value 

#include<iostream>
using namespace std;

void change(int x) {
    int x = 100;
}

int main() {
    int a = 10;
    change(a);

    cout << a;
    return 0;
}