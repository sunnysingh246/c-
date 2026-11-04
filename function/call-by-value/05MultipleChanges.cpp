#include <iostream>
using namespace std;

void fun(int x) {
    x = x + 10;
    x = x * 2;
    x = x - 5;
    cout << x << endl;
}

int main() {
    int a = 5;
    fun(a);
    cout << a;
}