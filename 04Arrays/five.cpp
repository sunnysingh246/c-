#include<iostream>
using namespace std;

int main() {
    int chaiSales[3][7] = {
         { 10,20,15,25,30,40,35 },            //shop 1 sale for 3 days
        { 15,25,20,30,35,45,40 },             //shop 2 sale for 3 days
        { 20,30,25,35,40,50,45 }              //shop 3 sale for 3 days
    };

    for (int i = 0;i < 3;i++) {
        cout << "Am at shop " << i + 1 << "\n";
        for (int j = 0;j < 7;j++) {
            cout << chaiSales[i][j] << " cups\n";
        }
    }
}