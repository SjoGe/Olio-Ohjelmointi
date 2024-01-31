#include <iostream>
#include <string>

using namespace std;

class Chef {

public:

    //Konstruktori
    Chef(const std::string& name) : name(name){
        std::cout << "Chef" << name << "konstruktori" << std::endl;
    }

    //Destruktori
    virtual~Chef() {
        std::cout << "Chef" << name << "destruktori" << std::endl;
    }

    void makeSalad() {
        std::cout << "Chef" << name << "makes salad" << std::endl;
    }

    void makeSoup() {
        std::cout << "Chef" << name << "makes soup" << std::endl;
    }

    std::string getName() {
        return name;
    }


protected:
    std::string name;
};

class ItalianChef : public Chef {

public:

    //Destruktori
    ~ItalianChef() {
        std::cout << "Chef" << name << "destruktori" << std::endl;
    }

    void makePasta() {
        std::cout << "Chef" << getName() << "makes pasta." << std::endl;
    }
};


int main() {
    Chef chef(" Gordon Ramsay ");

    chef.makeSalad();
    chef.makeSoup();

    Chef italianChef(" Anthony Bourdain ");

    italianChef.makeSalad();
    italianChef.makeSoup();

    return 0;
}
