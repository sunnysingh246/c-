#include<iostream>
using namespace std;

int* prepareChaiCups(int cups) {
    int* orders = new int[cups];

    for (int i = 0;i < cups;i++) {
        orders[i] = (i + 1) * 10;
    }
    return orders;
}

int main() {
    int cups = 5;
    int* orderedCups = prepareChaiCups(cups);

    for (int i = 0;i < cups;i++) {
        cout << "Cup: " << i + 1 << " has " << orderedCups[i] << "ml\n";
    }

    delete[] orderedCups;

    return 0;
}