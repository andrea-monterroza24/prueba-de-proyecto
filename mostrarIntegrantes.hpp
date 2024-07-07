#include <iostream>
#include <fstream>

using namespace std;


void mostrarIntegrantes() {
    ifstream archivo("integrantes.txt", ios::app); // Abrir archivo en modo lectura
    if (archivo.is_open()) {
        string nombre;
        
while (getline(archivo, nombre)) {
            cout << nombre << endl;
        }
        archivo.close();
        cout << "1- Andrea Elizabeth Monterroza Rodriguez. Carnet: 0004624" << endl;
        cout << "2- Zoe Alexandra Flores Parada. Carnet: 0008424"<<endl;
        cout << "3- Daniela Alejandra Luna Gutierrez. Carnet: 00060224"<<endl;

    } else {
        cout << "No se pudo abrir el archivo de integrantes." << endl;
    }
}