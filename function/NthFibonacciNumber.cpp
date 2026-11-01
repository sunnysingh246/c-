//Nth fibonacii number 

#include<iostream>
using namespace std;

int  NthFibonaciiNumber(int n) {
    int a = 0;
    int b = 1;
    int val = 0;

    if (n == 0) {
        return 0;
    }
    else if (n == 1) {
        return 1;
    }

    for (int i = 2; i <= n; i++) {
        val = a + b;
        a = b;
        b = val;
    }

    return val;
}

int main() {
    int N;
    cout << "Enter number to get nth fibonacci number: ";
    cin >> N;
    int result = NthFibonaciiNumber(N);

    cout << result;
}