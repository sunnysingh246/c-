#include<iostream>
#include<string>
using namespace std;

class Tea {
public:
    virtual void prepareIngridients() = 0;      //prue virtual function
    virtual void brew() = 0;      //prue virtual function
    virtual void serve() = 0;      //prue virtual function


    void makeTea() {
        prepareIngridients();
        brew();
        serve();
    }
};


//derived class
class GreenTea :public Tea {
public:

    void prepareIngridients() override {
        cout << "Green leaves and water is ready" << endl;
    }

    void brew() override {
        cout << "Green tea brewed" << endl;
    }

    void serve() override {
        cout << "Green tea served" << endl;
    }
};


class MasalaTea :public Tea {
public:

    void prepareIngridients() override {
        cout << "Masala leaves and water is ready along with masala" << endl;
    }

    void brew() override {
        cout << "Masala tea brewed" << endl;
    }

    void serve() override {
        cout << "Masala tea served" << endl;
    }
};


int main() {

    GreenTea greenTea;
    MasalaTea masalaTea;

    greenTea.makeTea();
    masalaTea.makeTea();
    
    return 0;
}


