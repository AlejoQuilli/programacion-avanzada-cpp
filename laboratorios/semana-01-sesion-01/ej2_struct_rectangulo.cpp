#include <iostream>
using namespace std;

struct Rectangulo{
    double base; //atributos
    double altura; //atributos

    double area(){ //comportamiento -> metodo
        return base * altura;
    }
};

int main(){
    Rectangulo rect1;
    Rectangulo rect2;
    Rectangulo rect3;

    rect1.altura = 5;
    rect1.base = 10.4;

//    cout<< "Area rect 1: " << area(base, altura) << endl;
    cout<< "Area rect 1: " << rect1.area() << endl;

    return 0;
}
