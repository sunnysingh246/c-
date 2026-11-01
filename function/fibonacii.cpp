#include<iostream>
using namespace std;

void fibonaaci(int n) {
    int a = 0;
    int b = 1;

    for (int i = 1;i <= n;i++) {
        cout << a << " ";

        int next = a + b;
        a = b;
        b = next;
    }
}

int main() {
    int n;
    cout << "Enter number of terms: ";
    cin >> n;

    fibonaaci(n);
    return 0;
}