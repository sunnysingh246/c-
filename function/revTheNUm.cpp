//reverse the given number using functions

#include<iostream>
using namespace std;

int reverseNumber(int num) {
    int orgNum, revNum = 0, rem;

    orgNum = num;
    while (orgNum != 0) {
        rem = orgNum % 10;
        revNum = revNum * 10 + rem;
        orgNum = orgNum / 10;
    }
    return revNum;
}

int main() {
    int n;
    cout << "Enter a number to reverse it: ";
    cin >> n;
    int result = reverseNumber(n);

    cout << "Reverse of the number is: " << result;
    return 0;
}
