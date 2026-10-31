///factorial problem using functions


#include<iostream>
using namespace std;

int factorial(int num) {
    int fact = 1;
    if (num == 0 || num == 1) {
        return 1;
    }
    else {
        return fact = num * factorial(num - 1);
    }
}

int main() {
    cout << factorial(5);
    return 0;
}