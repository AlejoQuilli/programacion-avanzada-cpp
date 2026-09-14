#include <iostream>
using namespace std;

int main(){

    int numero = 10;
    int *ptr_numero = &numero;

    cout << "Direccion de memoria: " << ptr_numero << endl;
    cout << "Valor en memoria: " << *ptr_numero << endl;
    cout << "Valor en memoria desde la variable: " << numero << endl << endl;

    int notas[5] = {80, 90, 60, 50, 71};
    int *ptr_notas = notas;

    cout << "Direccion de memoria: " << ptr_notas << endl;
    
    cout << "Notas desde el puntero: ";

    for(int i = 0; i < 5; i++){
        cout << *(ptr_notas + i) << " ";
    }

    cout << endl;

    return 0;
}