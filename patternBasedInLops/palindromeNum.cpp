#include <iostream>
using namespace std;

int main() {
    int orgNum, revNum = 0, rem, temp;

    cout << "Enter a number to check Armstrong or not: ";
    cin >> orgNum;

    temp = orgNum;

    while (temp != 0) {
        rem = temp % 10;
        revNum = revNum * 10 + rem;
        temp = temp / 10;
    }
    if (orgNum == revNum) {
        cout << "Palindrome number: " << orgNum;
    }
    else {
        cout << "NOT an Palindrome number";
    }

    return 0;
}