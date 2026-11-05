#include<iostream>
#include<vector>
using namespace std;


class Chai {
public:
    string TeaName;
    int servings;
    vector<string>ingredients;


    //default constructor
    Chai(string name, int serve, vector<string>ings) {
        cout << "Param constructor called" << endl;
        TeaName = name;
        servings = serve;
        ingredients = ings;
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
    Chai LemonTea("Lemon tea", 2, { "water ","Lemon"," Honey" });
    LemonTea.displayChaiDetail();
}