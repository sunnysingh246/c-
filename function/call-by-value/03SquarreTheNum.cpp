#include<iostream>
using namespace std;

void square(int num) {
    num = num * num;
    cout << "Square = " << num << endl;
}

int main() {
    int x = 4;
    square(x);
    cout << "Original number: " << x << endl;
}