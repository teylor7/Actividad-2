#include "Persona.cpp"
#include <iostream>
class Estudiante {
private:
    string carnet;
public:
    Estudiante(string car) {
        carnet = car;
    }

    void setCarnet(string car) {
        carnet = car;
    }
    string getCarnet() {
        return carnet;
    }
    void leer() {
        cout << "Carnet: " << carnet << endl;
    }
};

int main() {
    Estudiante e1("MARCOS2026");
    e1.leer();
    return 0;
}
