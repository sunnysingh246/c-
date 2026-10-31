#include <iostream>
using namespace std;

int main() {
    int orgNum, newNum = 0, rem;

    cout << "Enter a number to check Armstrong or not: ";
    cin >> orgNum;

    int temp = orgNum;

    while (temp != 0) {
        rem = temp % 10;
        newNum += rem * rem * rem;
        temp = temp / 10;
    }

    if (orgNum == newNum) {
        cout << "Armstrong number: " << orgNum;
    }
    else {
        cout << "NOT an Armstrong number";
    }

    return 0;
}