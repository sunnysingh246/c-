#include<iostream>
#include<iomanip>

using namespace std;

int main() {
    int orgNum, revNum = 0, temp, rem;
    cout << "Enter a number to reverse it: ";
    cin >> orgNum;

    temp = orgNum;
    while (temp != 0) {
        rem = temp % 10;
        revNum = revNum * 10 + rem;
        temp = temp / 10;
    }

    cout << "Reversed number is: " << revNum;

    return 0;
}