//find out the 2nd largest number in a given number

#include <iostream>
using namespace std;

int secondLargest(int n) {

    int largest = -1;
    int secondLargest = -1;

    while (n > 0) {

        int digit = n % 10;

        if (digit > largest) {

            secondLargest = largest;
            largest = digit;

        }
        else if (digit > secondLargest && digit != largest) {

            secondLargest = digit;
        }

        n = n / 10;
    }

    return secondLargest;
}

int main() {

    int n = 58329;

    cout << secondLargest(n);

    return 0;
}