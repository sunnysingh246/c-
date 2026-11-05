#include<iostream>
#include<vector>
using namespace std;


class Chai {
public:
    string* TeaName;
    int servings;
    vector<string>ingredients;


    //default constructor
    Chai(string name, int serve, vector<string>ings) {
        cout << "Param constructor called" << endl;
        TeaName = new string(name);
        servings = serve;
        ingredients = ings;
    }

Chai(const Chai& other){
    TeaName=new string(*other.TeaName);
    servings=other.servings;
   ingredients=other.ingredients;
   cout<<"Copy constructor called"<<endl;
}

    ~Chai(){
        delete TeaName;
        cout<<"Destructor called"<<endl;
    }

    void displayChaiDetail() {
        cout << "Tea name: " << *TeaName << endl;
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
    //LemonTea.displayChaiDetail();

    //copy the object
    Chai copiedChai=LemonTea;
    //copiedChai.displayChaiDetail();

    *LemonTea.TeaName="MOdified tea name";
    cout<<"Lemon tea---------"<<endl;
    LemonTea.displayChaiDetail();
    cout<<"copied tea-----------"<<endl;
    copiedChai.displayChaiDetail();

    return 0;
}   