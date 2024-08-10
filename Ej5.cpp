#include <iostream>
using namespace std;

class calcu {
private:
    int num1, num2;
public:
    calcu(int n1, int n2);
    int sumar();
    int restar();
    void dividir();
    int multiplicar();
};

calcu::calcu(int n1, int n2) {
    num1 = n1;
    num2 = n2;
}

int calcu::sumar() {
    return num1 + num2;
}

int calcu::restar() {
    return num1 - num2;
}

void calcu::dividir() {
    try {
        if (num2 == 0) {
            throw invalid_argument("división por cero");
        }
        else {
            cout << "Resultado de la división: " << num1 / num2 << endl;
        }
    }
    catch (const invalid_argument& e) {
        cout << "Error: " << e.what() << endl;
    }
}

int calcu::multiplicar() {
    return num1 * num2;
}

int main() {
    int num, num1, num2;

    cout << "Elija una opción:\n";
    cout << "1. Sumar dos enteros\n";
    cout << "2. Restar dos enteros\n";
    cout << "3. Dividir dos enteros\n";
    cout << "4. Multiplicar dos enteros\n";

    cin >> num;
    cout << "Ingrese el entero nro 1: \n";
    cin >> num1;
    cout << "Ingrese el entero nro 2: \n";
    cin >> num2;

    calcu a(num1, num2);

    switch (num) {
    case 1:
        cout << "Resultado de la suma: " << a.sumar() << endl;
        break;
    case 2:
        cout << "Resultado de la resta: " << a.restar() << endl;
        break;
    case 3:
        a.dividir();
        break;
    case 4:
        cout << "Resultado de la multiplicación: " << a.multiplicar() << endl;
        break;
    default:
        cout << "Opción no válida" << endl;
        break;
    }

    return 0;
}
