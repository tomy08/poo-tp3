/*
Concatenar dos cadenas usando punteros y funciones.
*/

#include <iostream>
#include <string>

using namespace std;

string concatenar(char* str1, char* str2, int cantidadPalabra1, int cantidadPalabra2) {
    string resultado = "";

    for (int i = 0; i < cantidadPalabra1; i++) {
        resultado += *(str1 + i);
    }

    for (int j = 0; j < cantidadPalabra2; j++) {
        resultado += *(str2 + j);
    }

    return resultado;
  
}

int main(){
    string str1, str2;
    cout << "Ingrese la primera cadena: ";
    getline(cin, str1);
    cout << "Ingrese la segunda cadena: ";
    getline(cin, str2);

    char* ptr1 = &str1[0];
    char* ptr2 = &str2[0];

    int cantidadPalabra1 = str1.length();
    int cantidadPalabra2 = str2.length();

    string res = concatenar(ptr1, ptr2,cantidadPalabra1, cantidadPalabra2);

    cout << "Cadena concatenada: " << res << endl;

    system("pause");
    return 0;
}