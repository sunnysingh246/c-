#include<iostream>
#include<vector>
using namespace std;


class Chai {
public:
    string TeaName;
    int servings;
    vector<string>ingredients;


    //default constructor
    Chai() {
        cout << "Constructor called" << endl;
        TeaName = "unknown tea";
        servings = 1;
        ingredients = { "water ","Tea leaves" };
    }

    void displayChaiDetail() {
        cout << "Tea name: " << TeaName << endl;
        cout << "Tea servings: " << servings << endl;
        cout << " Ingredients: ";

        for (string ingredient : ingredients) {
            cout << ingredient << "";
        }
        cout << endl;
    }
};

int main() {
    Chai defaultChai;
    defaultChai.displayChaiDetail();
}