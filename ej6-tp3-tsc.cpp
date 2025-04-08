/*
Contar el número de ocurrencias de un elemento en un arreglo usando puntero y funciones
*/
#include <iostream>
#include <vector>

using namespace std;

int contarConcurrencias(int *numeros, int cantidad, int numeroBuscado)
{
    int total = 0;

    for (int i = 0; i < cantidad; i++)
    {
        if (*(numeros + i) == numeroBuscado)
        {
            total++;
        }
    }

    return total;
}

int main()
{
    vector<int> numeros;
    int cantidad;
    int total;
   

    cout << "Ingrese la cantidad de numeros: ";
    cin >> cantidad;

    cout << "Ingrese los numeros:" << endl;
    for (int i = 0; i < cantidad; ++i)
    {
        int num;
        cin >> num;
        numeros.push_back(num);
    }

    int *ptr = &numeros[0];

    cout << endl << "Ingrese el numero a buscar: ";
    int numeroBuscado;
    cin >> numeroBuscado;
    total = contarConcurrencias(ptr, cantidad, numeroBuscado);
    cout << endl << "El numero " << numeroBuscado << " se repite " << total << " veces." << endl;
    

    system("pause");
    return 0;
}
