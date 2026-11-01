//check the given number is palindrome or not

#include<iostream>
using namespace std;

int palindrome(int num) {
    int revNum = 0, rem;
    int temp = num;
    while (temp != 0) {
        rem = temp % 10;
        revNum = revNum * 10 + rem;
        temp = temp / 10;
    }
    return revNum;
}

int main() {
    int n;
    cout << "Enter a number to check palindrome: ";
    cin >> n;
    int result = palindrome(n);

    if (result == n) {
        cout << "Palindrome";
    }
    else {
        cout << "NOT palindrome!!!";
    }

    return 0;
}