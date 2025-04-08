#include<iostream>
#include<vector>

using namespace std;


int suma(int* numeros,int cantidad){
  int total = 0;

  for (int i = 0; i < cantidad; i++)
  {
      total += *(numeros + i);
  }

  return total;
}

float promedio (int* numeros, int cantidad){
  int total = suma(numeros, cantidad);
   return static_cast<float>(total) / cantidad;
}


int main(){
    vector<int> numeros;
    int cantidad;
    int total;
    float avg;

    cout << "Ingrese la cantidad de numeros: ";
    cin >> cantidad;

    cout << "Ingrese los numeros:" << endl;
    for (int i = 0; i < cantidad; ++i)
    {
        int num;
        cin >> num;
        numeros.push_back(num);
    }

    int* ptr = &numeros[0];

    total = suma(ptr,cantidad);
    avg = promedio(ptr,cantidad);

    cout << endl << "El promedio es: " << avg;
    cout << endl << "El total es: " << total;

    system("pause");
    return 0;
}
