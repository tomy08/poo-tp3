#include<iostream>
#include<vector>

using namespace std;


void intercambiar(int* a, int* b){
    int temp = *a; 
    *a = *b;      
    *b = temp; 
}

int main(){
	int a,b;
    cout << "Ingresar primer numero (a): ";
    cin >> a;
    cout << endl << "Ingresar segundo numero(b): ";
    cin >> b;

    cout << endl << "Antes de intercambiar: " << endl;
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    intercambiar(&a, &b);
    cout << endl << "Despues de intercambiar: " << endl;    
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;


 system("pause");
    return 0;   
}
