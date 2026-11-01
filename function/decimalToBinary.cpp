//conver a number from decimal to binary

#include<iostream>
using namespace std;

void decimalToBinary(int num) {
    int binary = 0;
    int place = 1;

    while (num > 0) {
        int remainder = num % 2;
        binary = binary + remainder * place;

        num = num / 2;
        place = place * 10;
    }
    cout << binary;
}

int main() {
    int n;

    cout << "Enter decimal number: ";
    cin >> n;

    decimalToBinary(n);

    return 0;
}