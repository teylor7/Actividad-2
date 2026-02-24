//segundo comentarios
#include "Persona.cpp"
#include <iostream>
class Docente : public Persona {
private:
    string codigo;
    string nit;
    float salario;
    string profesion;

public:
    Docente() {}

    Docente(string cui, string nombres, string apellidos,
            string direccion, int telefono,
            string fecha_nacimiento, bool genero,
            string codigo, string nit,
            float salario, string profesion)
        : Persona(cui, nombres, apellidos, direccion,
                  telefono, fecha_nacimiento, genero) {

        this->codigo = codigo;
        this->nit = nit;
        this->salario = salario;
        this->profesion = profesion;
    }

    void setCodigo(string codigo) { this->codigo = codigo; }
    void setNit(string nit) { this->nit = nit; }
    void setSalario(float salario) { this->salario = salario; }
    void setProfesion(string profesion) { this->profesion = profesion; }

    string getCodigo() { return codigo; }
    string getNit() { return nit; }
    float getSalario() { return salario; }
    string getProfesion() { return profesion; }

    void leer() {
        Persona::leer();
        cout << "\n--- Datos Docente ---" << endl;
        cout << "Codigo: " << codigo << endl;
        cout << "NIT: " << nit << endl;
        cout << "Salario: " << salario << endl;
        cout << "Profesion: " << profesion << endl;
    }
};
