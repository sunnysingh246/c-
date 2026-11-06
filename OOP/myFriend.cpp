#include<iostream>
#include<vector>
#include<string>

using namespace std;

class Chai {
private:
    string teaName;
    int servings;

public:
    Chai(string name, int serve) :teaName(name), servings(serve) {}

    friend bool compareServings(const Chai& chai1, const Chai& chai2);

    void dispaly() const {
        cout << "Tea name: " << teaName << endl;
    }

};

bool compareServings(const Chai& chai1, const Chai& chai2) {
    return chai1.servings > chai2.servings;
}

int main() {
    Chai masalaChai("Masala chai", 4);
    Chai gingerChai("Ginger chai", 8);

    if (compareServings(masalaChai, gingerChai)) {
        cout << "Masala chai is having MORE servings" << endl;
    }
    else {
        cout << "Ginger chai is having LESS servings" << endl;
    }

    masalaChai.dispaly();
    gingerChai.dispaly();
}