#include <iostream>
using namespace std;

// Declaration
int add(int a, int b);

int main() {

    cout << add(10, 20);

    return 0;
}

// Definition
int add(int a, int b) {
    return a + b;
}