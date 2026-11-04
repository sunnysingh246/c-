#include<iostream>
using namespace std;

void add(int x) {
    x = x + 15;
    cout << "Inside function: " << x;
}

int main() {
    int x = 5;
    add(x);

    cout << "\nOutside function: " << x;
}


//Here, x is a copy of the original variable. 
//Changes to x don't affect the original variable.