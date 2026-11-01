//Check the given number is anstrong or not

#include<iostream>
using namespace std;

int amstrong(int num) {
    int rem, newNum = 0;
    int temp = num;

    while (temp != 0) {
        rem = temp % 10;
        newNum += rem * rem * rem;
        temp = temp / 10;
    }

    return newNum;
}

int main() {
    int n;
    cout << "Enter a number to check amstrong or not: ";
    cin >> n;

    int result = amstrong(n);

    if (result == n) {
        cout << "Amstrong number";
    }
    else {
        cout << "NOT amstrong number !!!";
    }
}
