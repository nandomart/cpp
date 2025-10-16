#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<double> numeros;
    double promedio, suma, valor;
    int i;
    numeros.clear();
    //solicitud de 4 números
    for(i = 1; i <= 4; i++){
        cout << "Proporciona el numero " << i << ": ";
        cin >> valor;
        numeros.push_back(valor); //AGREGO EL NUMERO AL VECTOR
    }
    suma = 0;
    //Recorro el vector por rango
    for(double item : numeros){
        suma += item;
    }
    promedio = suma / numeros.size();
    cout << "La suma es: " << suma << endl;
    cout  << "El promedio es: " << promedio << endl;
    cout << "La cantidad de elementos es: " << numeros.size() << endl;
    return 0;
}
