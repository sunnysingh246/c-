#include<iostream>
#include<string>
#include<vector>

using namespace std;


//Base/main/parent class
class Tea {
protected:
    string teaname;
    int servings;

public:
    Tea(string name, int serve) :teaname(name), servings(serve) {
        cout << "Tea constructor called " << teaname << endl;
    }

    virtual void brew() const {
        cout << "Brewing " << teaname << "with generic method" << endl;
    }

    virtual void serving() const {
        cout << "serving " << servings << "cups of tea with generic method" << endl;
    }

    virtual ~Tea() {
        cout << "Tea destructor called for " << teaname << endl;
    }
};

class GreenTea :public Tea {
public:
    GreenTea(int serve) :Tea("Green tea", serve) {
        cout << "Green tea constructor called " << endl;
    }

    void brew() const override {
        cout << "Brewing" << teaname << "by stepping green tea leaves" << endl;
    }

    ~GreenTea() {
        cout << "Green tea descructor called" << endl;
    }
};

class MasalaTea :public Tea {
public:
    MasalaTea(int serve) :Tea("Masala tea", serve) {
        cout << "Masala tea constructor called" << endl;
    }

    void brew() const override final {
        cout << "Brewing" << teaname << "with spices snd milk" << endl;
    }

    ~MasalaTea() {
        cout << "Masala tea destructor called" << endl;
    }
};

// class Spicy :public MasalaTea {
// public:
//     void brew() const override{
//         cout << "Brewing" << teaname << "by stepping green tea leaves" << endl;
//     }
// };


int main() {

    Tea* tea1 = new GreenTea(2);
    Tea* tea2 = new MasalaTea(4);

    tea1->brew();
    tea1->serving();

    tea2->brew();
    tea2->serving();

    delete tea1;
    delete tea2;

    return 0;
}