/*
Copiar un arreglo en otro arreglo usando punteros y funciones. Mostrando el resultado final.
*/

#include <iostream>
#include <vector>

using namespace std;

void copiarArreglo(int* origen, int* destino, int cantidad) {
    for (int i = 0; i < cantidad; ++i) {
        *(destino + i) = *(origen + i);
    }
}

int main(){
    int cantidad;
    cout << "Ingrese la cantidad de numeros: ";
    cin >> cantidad;

    vector<int> numeros(cantidad);
    vector<int> copia(cantidad);

    cout << "Ingrese los numeros:" << endl;
    for (int i = 0; i < cantidad; ++i)
    {
        cin >> numeros[i];
    }

    int* ptr = &numeros[0];
    int* ptrCopia = &copia[0];

    copiarArreglo(ptr, ptrCopia, cantidad);
    
    cout << "Arreglo copiado:" << endl;
    for (int i = 0; i < cantidad; ++i)
    {
        cout << *(ptrCopia + i) << " ";
    }
    
    cout << endl;

    system("pause");
    return 0;
}