#include <iostream>

class Stove {
private:
    int temperature = 0; // cannot be changed directly from outside

public:
    Stove(int temperature) {
        setTemperature(temperature);
    }

    int getTemperature() {
        return temperature; // getter
    }

    void setTemperature(int temperature) {
        this->temperature = temperature; // setter
    }
};

int main() {
    //Abstraction = hiding unnecessary data from outside a class
    // Encapsulation = hiding data from outside the class
    // getter = makes a private attribute readable
    // setter = makes a private attribute writable

    Stove stove(0);
    std::cout << stove.getTemperature();
    return 0;
}