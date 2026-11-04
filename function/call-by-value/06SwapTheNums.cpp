#include<iostream>
using namespace std;

void swap(int a, int b) {
    int temp = a;
    a = b;
    b = temp;

}

int main() {
    int x = 100;
    int y = 200;

    swap(x, y);

    cout << x << " " << y;
}