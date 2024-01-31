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
    ~Chef() {
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

    //Konstruktori
    ItalianChef(const std::string& name) : Chef(name){
        std::cout << "Chef" << name << "konstruktori" << std::endl;
    }

    void makePasta() {
        std::cout << "Chef" << getName() << "makes pasta" << std::endl;
    }
};


int main() {
    Chef chef(" Jyrki ");
    ItalianChef italianChef(" Mario ");

    chef.makeSalad();
    italianChef.makePasta();
    chef.makeSoup();


    return 0;
}
