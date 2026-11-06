#include<iostream>
#include<vector>
using namespace std;


class Chai {
public:
    string teaName;
    int servings;
    vector<string>ingridients;

    //deligation constructor
    Chai(string name) :Chai(name, 1, { "water","Tea leaves" }) {}

    //main constructor
    Chai(string name, int serve, vector<string>ingr) {
        teaName = name;
        servings = serve;
        ingridients = ingr;

        cout << "Main constructor called !!" << endl;
    }

    void displayChaiDetail() {
        cout << "Tea name: " << teaName << endl;
        cout << "Tea servings: " << servings << endl;
        cout << " Ingredients: ";

        for (string ingredient : ingridients) {
            cout << ingredient << "";
        }
        cout << endl;
    }
};

int main() {
    Chai quickChai("Quick chai");
    quickChai.displayChaiDetail();

    return 0;
}