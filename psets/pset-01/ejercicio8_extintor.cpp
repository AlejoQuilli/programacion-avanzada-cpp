// Ejercicio 8: ExtintorIncendios
//
// Completa la clase ExtintorIncendios: un atributo privado presionPSI y
// un constructor ExtintorIncendios(double presionInicial). Si
// presionInicial es menor o igual a 0, o mayor a 200, el constructor
// avisa por consola ("Presion invalida, se asigna presion segura por
// defecto") y asigna 100.0 como valor seguro por defecto. Si es valida,
// la asigna directamente. Agrega tambien el getter getPresionPSI().
//
// Salida esperada:
// Presion: 150
// Presion invalida, se asigna presion segura por defecto
// Presion: 100
//
// Compilar:  g++ -std=c++20 -Wall -Wextra -g ejercicio8_extintor.cpp -o bin/ejercicio8
// Ejecutar:  ./bin/ejercicio8

#include <iostream>
using namespace std;

class ExtintorIncendios {
private:
    double presionPSI;

public:
    ExtintorIncendios(double presionInicial) {
        // TODO: si presionInicial es invalida (<= 0 o > 200), imprime el
        // aviso y asigna presionPSI = 100.0. Si no, asigna presionPSI =
        // presionInicial.
        if(presionInicial <= 0 || presionInicial > 200){
            cout << "Presion invalida, se asigna presion segura por defecto." << endl;
            presionPSI = 100.0;
        }
        else{
            presionPSI = presionInicial;
        }
    }

    double getPresionPSI() {
        return presionPSI;
    }
};

int main() {
    ExtintorIncendios e1(150.0);
    cout << "Presion: " << e1.getPresionPSI() << endl;

    ExtintorIncendios e2(-20.0);
    cout << "Presion: " << e2.getPresionPSI() << endl;

    return 0;
}
