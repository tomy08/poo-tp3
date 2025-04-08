#include <iostream>
#include <vector>


using namespace std;


void encontrarMayorYMenor(int* numeros, int cantidad, int& mayor, int& menor) {
    mayor = *numeros;
    menor = *numeros;

    for (int i = 1; i < cantidad; i++) {
        if (*(numeros + i) > mayor) {
            mayor = *(numeros + i);
        }
        if (*(numeros + i) < menor) {
            menor = *(numeros + i);
        }
    }
}

int main() {
    vector<int> numeros;
    int cantidad;
    int mayor, menor;

    cout << "Ingrese la cantidad de numeros: ";
    cin >> cantidad;

    cout << "Ingrese los numeros:" << endl;
    for (int i = 0; i < cantidad; ++i) {
        int num;
        cin >> num;
        numeros.push_back(num);
    }

    int* ptr = &numeros[0];

    encontrarMayorYMenor(ptr, cantidad, mayor, menor);

    cout << endl << "El mayor numero es: " << mayor << endl;
    cout << "El menor numero es: " << menor << endl;

    system("pause");
    return 0;
}