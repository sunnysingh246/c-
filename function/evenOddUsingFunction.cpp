//check the given number is odd or even using function

#include<iostream>
using namespace std;

void checkEvenOdd(int n) {
    if (n % 2 == 0) {
        cout << n << " is even" << endl;
    }
    else {
        cout << n << " is odd" << endl;
    }
}

int main() {
    checkEvenOdd(15);
    checkEvenOdd(14);

    return 0;
}