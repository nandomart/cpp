#include <iostream>

using namespace std;

int main(){
    int numero = 25;
    double data[5] = {40, 50, 98, 42, 2};
    int *puntero;
    double *puntero2;
    puntero = &numero;
    cout << numero << endl;
    cout << &numero << endl;
    cout << puntero << endl;
    cout << *puntero << endl;
    puntero2 = &data[0];
    for(int i = 0; i < 5; i++){
        cout << "Valor: " << *(puntero2 + i) << ";\tMemoria: " << (puntero2 + i) << endl;
    }
    return 0;
}