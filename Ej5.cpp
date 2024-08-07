#include <iostream>
#include "Ej5.h"
using namespace std;

/*Crear una clase calculadora, dicha clase debe tener los métodos sumar, restar,
dividir, multiplicar que realizarán operaciones en dos propiedades A y B. En el
método dividir verifique que el divisor no es 0. Si el divisor es 0, arroje una
 excepción.*/


 int main(){
    int num, num1;
    cout<<"Elija una opción:/n";
    cout <<"sumar dos enteros (1) /n";
    cout <<"restar dos enteros (2) /n";
    cout <<"dividir dos enteros (3) /n";
    cout <<"multiplicar dos enteros (4) /n";

    cin>>num;
    switch (num){
    case 1:
        cout<<"ingrese el entero nro 1: /n";
        cin>>num1;
        cout<<"ingrese el entero nro 2: /n";
        cin>>num;

        calcu a(num1,num);
        cout<<a.sumar();

        break;
    
    case 2:
        cout<<"ingrese el entero nro 1: /n";
        cin>>num1;
        cout<<"ingrese el entero nro 2: /n";
        cin>>num;

        calcu a(num1,num);
        cout<<a.restar();

        break;
    case 3:
        cout<<"ingrese el dividendo nro 1: /n";
        cin>>num1;
        cout<<"ingrese el divisor nro 2: /n";
        cin>>num;

        calcu a();
        a.dividir(num1,num);
        break;
    
    case 4:
        cout<<"ingrese el entero nro 1: /n";
        cin>>num1;
        cout<<"ingrese el entero nro 2: /n";
        cin>>num;

        calcu a(num1,num);
        cout<<a.multiplicar();

        break;

    default:
        break;
    }

    

 }