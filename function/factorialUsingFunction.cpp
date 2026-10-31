#include<iostream>
using namespace std;

int factorial(int num) {
    int fact = 1;

    for (int i = 1;i <= num;i++) {
        fact = fact * i;
    }
    return fact;
}

int main() {
    int n;
    cout << "Enter a number to calculate factorial: ";
    cin >> n;

    int result = factorial(n);

    cout << "Factorial of " << n << " is: " << result;

    return 0;
}