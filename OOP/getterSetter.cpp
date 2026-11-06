#include<iostream>
#include<vector>
using namespace std;

class Chai {
private:
    string teaName;
    int servings;
    vector<string>ingridients;

public:
    Chai() {
        teaName = "Unknown tea";
        servings = 1;
        ingridients = { "Water ","Tea ","Tea leaves" };
    }

    Chai(string name, int serve, vector<string>ingr) {
        teaName = name;
        servings = serve;
        ingridients = ingr;
    }

    //getter
    string getTeaName() {
        return teaName;
    }

    //setter
    void setTeaName(string name) {
        //logic
        teaName = name;
    }

    //getter for servings
    int getServings() {
        return servings;
    }

    //setter for servings
    void setSerings(int serve) {
        servings = serve;
    }

    //getter for ingriendients
    vector<string> getIngridents() {
        return ingridients;
    }

    //setter for ingridients
    void setingridients(vector<string>ingr) {
        ingridients = ingr;
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
    Chai chai;
    chai.setTeaName("Ginger tea");
}