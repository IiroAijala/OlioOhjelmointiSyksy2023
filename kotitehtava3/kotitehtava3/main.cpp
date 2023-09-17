#include <iostream>
#include <string>

class Chef {
public:
    Chef(std::string name) : name(name) {
        std::cout << "Chef " << name << " konstruktori" << std::endl;
    }

    ~Chef() {
        std::cout << "Chef " << name << " destruktori" << std::endl;
    }

    void makeSalad() {
        std::cout << "Chef " << name << " makes salad" << std::endl;
    }

    void makeSoup() {
        std::cout << "Chef " << name << " makes soup" << std::endl;
    }

    std::string getName() {
        return name;
    }

protected:
    std::string name;
};

class ItalianChef : public Chef {
public:
    ItalianChef(std::string name, int jauhot, int vesi) : Chef(name), jauhot(jauhot), vesi(vesi) {
        std::cout << "Chef " << name << " konstruktori" << std::endl;
    }

    void makePasta() {
        std::cout << "Chef " << getName() << " makes pasta with special recipe" << std::endl;
        std::cout << "Chef " << getName() << " users jauhot = " << jauhot << std::endl;
        std::cout << "Chef " << getName() << " users vesi = " << vesi << std::endl;
    }

private:
    int jauhot;
    int vesi;
};

int main() {
    Chef Jyrki("Jyrki");
    ItalianChef Mario("Mario", 250, 100);
    Jyrki.makeSalad();
    Mario.makePasta();
    Jyrki.makeSoup();

    return 0;
}
