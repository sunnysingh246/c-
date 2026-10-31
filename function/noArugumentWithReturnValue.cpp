//No Parameters, With Return Value

#include<iostream>
using namespace std;

int add() {
    int a = 10;
    int b = 20;

    return a + b;
}

int main() {
    int result = add();
    cout << result;

    return 0;
}
