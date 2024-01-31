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
    ItalianChef(const std::string& name) : Chef(name), flour(250), water(100){
        std::cout << "Chef" << name << "konstruktori" << std::endl;
    }

    void makePasta() {
        std::cout << "Chef " << getName() << " makes pasta with special recipe" << std::endl;
        std::cout << "Chef " << getName() << " uses jauhot =" << flour << std::endl;
        std::cout << "Chef " << getName() << " uses vesi =" << water << std::endl;
    }

private:
    int flour;
    int water;
};


int main() {
    ItalianChef italianChef(" Mario ");

    italianChef.makePasta();


    return 0;
}
