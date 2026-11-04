#include<iostream>
using namespace std;

int main() {
    auto square = [](int n) {
        return n * n;
        };

    cout << square(5);
}