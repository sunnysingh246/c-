#include<iostream>
using namespace std;

int main() {
    auto calculate = [](int x, int y) {
        int sum = x + y;
        int diff = x - y;

        cout << "Sum: " << sum;
        cout << "Difference: ";
        };

    calculate(10, 20);
}