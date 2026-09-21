#include <iostream>
<<<<<<< HEAD
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
=======

int main() {

    int numero = 10;

    int *ptr_numero = &numero;

    std::cout << "Direccion de memoria: " << ptr_numero << std::endl;    
    std::cout << "Valor en memoria desde puntero: " << *ptr_numero << std::endl;    
    std::cout << "Valor en memoria desde la variable:" << numero << std::endl;
    
    int notas[5] = {80, 90, 60, 50, 71};

    int *ptr_notas = notas;
 
    std::cout << "Direccion de memoria: " << ptr_notas << std::endl;    
    std::cout << "Valor en memoria desde puntero: " << *ptr_notas << std::endl;    

    ptr_notas += 1;
    std::cout << "Valor en memoria desde puntero: " << *ptr_notas << std::endl;    
>>>>>>> 90fbb9ebee6bf1a2548f0f6706eb3d0f1ca11491

    return 0;
}