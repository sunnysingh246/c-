#include<iostream>
#include<vector>

using namespace std;

class Chai {
public:
    //data memners(attributes)
    string TeaName;                //name of the tea 
    int serving;                  //Number of servings
    vector<string> ingredients;   //list of indegrients

    //member function
    void displayChaiDetail() {
        cout << "Tea name: " << TeaName << endl;
        cout << "Tea servings: " << serving << endl;
        cout << " Ingredients: ";

        for (string ingredient : ingredients) {
            cout << ingredient << "";
        }
        cout << endl;
    }

};

int main() {
    Chai chaiOne;

    chaiOne.TeaName = "Leamon tea";
    chaiOne.serving = 2;
    chaiOne.ingredients = { "Water ","Lemaon ","sugar ","tea" };

    chaiOne.displayChaiDetail();

    return 0;
}