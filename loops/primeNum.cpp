#include<iostream>
#include<iomanip>

using namespace std;

int main() {
    int num;
    bool isPrime = false;

    cout << "Enter a number to check prime or not: ";
    cin >> num;

    if (num <= 1) isPrime = false;
    else {
        for (int i = 2;i <= num / 2;i++) {
            if (num % i == 0) isPrime = true;
            break;
        }
    }

    if (isPrime) {
        cout << "Prime Number";
    }
    else {
        cout << "Not a Prime Number";
    }
    return 0;
}