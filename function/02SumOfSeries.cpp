//S=1^3+2^3+3^3+⋯+n^3 

#include<iostream>
using namespace std;

int sumSeries(int x) {
    int sum = 0;
    for (int i = 1; i <= x;i++) {
        sum = sum + (i * i * i);
    }
    return sum;
}

int main() {
    int n;
    cout << "Enter number of terms: ";
    cin >> n;
    int result = sumSeries(n);

    cout << "Result: " << result;
    return 0;
}