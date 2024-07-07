#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void mostrarAyuda() {
    ifstream archivo("ayuda.txt", ios::in); // Abrir archivo en modo lectura
    if (archivo.is_open()) {
        string linea;
        cout << "--------------------" << endl;
        cout << "Instrucciones:" << endl;
        while (getline(archivo, linea)) {
            cout << linea << endl; // Mostrar cada línea del archivo
        }
        archivo.close();
        cout << "El juego trae tres niveles de dificultad, uno elige que nivel desea jugar tomando en cuenta que cada "
                "nivel trae un numero de palabras establecidas para el nivel basico las palabras cuentan con 4 letras, para "
                "el nivel intermedio se cuenta con 6 letras y para el ultimo nivel que es el avanzado se cuenta con 8 letras. "
                "Sin importar el nivel que elija, tiene 5 vidas para jugar. Si se equivoca de letra va perdiendo vidas." << endl;
    } else {
        cout << "No se pudo abrir el archivo de ayuda." << endl;
    }
}

