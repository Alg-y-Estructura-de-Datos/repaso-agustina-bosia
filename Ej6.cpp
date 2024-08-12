/*Escribe un programa en C++ que tenga una función llamada agregarContacto que
 tome un vector<string> por referencia y dos string (uno para el nom y otro para el
 número de teléfono) y los agregue a la lista de contactos en formato "Nombre:
 Número". También tendrá una función llamada mostrarContactos que tome un
 vector<string> por referencia y muestre todos los contactos en la lista. En la función
 main, permite al usuario agregar contactos y mostrar la lista de contactos hasta que
 decida salir mediante el uso de un menú.*/

 #include <iostream>
 #include <vector>
 using namespace std;
 

void agregarContacto(vector<string> &contactos, string nom, string num){
    contactos.push_back(nom + ": " + num);
}

void mostrarContactos(vector<string> &contactos){
    cout << "Contactos: \n";
    for (int i = 0; i < contactos.size(); i++){
        cout << contactos[i] << endl;
    }
}


int main(){
    vector <string> contactos;

    int opcion=0;
    string nom, num;

    while (opcion != 3){
        cout << "1. Agregar contacto\n";
        cout << "2. Mostrar contactos\n";
        cout << "3. Salir\n";
        cout << "Ingrese una opcion: ";
        cin >> opcion;

        switch(opcion){
            case 1:
                cout << "Ingrese el nombre del contacto: ";
                cin >> nom;
                cout << "Ingrese el número del contacto: ";
                cin >> num;
                agregarContacto(contactos, nom, num);
                break;
            case 2:
                mostrarContactos(contactos);
                break;
            case 3:
                cout << "Saliendo...\n";
                break;
            default:
                cout << "Opcion invalida\n";
                break;
    }
}
}