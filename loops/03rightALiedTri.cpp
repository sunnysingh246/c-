//       *
//     * *
//   * * *
// * * * *

#include<iostream>
#include<iomanip>

using namespace std;

int main() {
    for (int i = 1;i <= 5;i++) {
        //print spaces
        for (int j = 1; j <= 5 - i;j++) {
            cout << " ";
        }
        for (int j = 1;j <= i;j++) {
            cout << "*";
        }

        cout << endl;

    }

    return 0;

}