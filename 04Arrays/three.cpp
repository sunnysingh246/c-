#include<iostream>
using namespace std;

int totalServed(int chai[], int size) {
    int total = 0;
    for (int i = 0;i < size;i++) {
        total += chai[i];
    }
    return total;
}

int main() {
    int chaiServerd[7] = { 60,67,65,78,45,43,56 };
    int total = totalServed(chaiServerd, 7);
    cout << "Total chai served: " << total;

    return 0;
}