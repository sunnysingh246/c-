//S=x+x^2/2!+x^3/3!+........

#include<iostream>
using namespace std;

int fact(int num) {
    int fact = 1;
    for (int i = 1;i <= num;++i) {
        fact = fact * i;
    }
    return fact;
}

int power(int b, int p) {
    float r = 1.0;
    for (int i = 1;i <= p;++i) {
        r = r * b;
    }
    return r;
}

float series(int x, int n) {
    float sum = 0;
    for (int i = 0;i <= n;i++) {
        sum = sum + power(x, i) / fact(i);
    }
    return sum;
}

int main() {
    int x, n;
    cout << "Enter x and n: ";
    cin >> x >> n;

    cout << "sum= " << series(x, n);
    return 0;
}