#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int numeros = 0, valor = 1;
    double suma = 0, promedio;
    //continue
    //break
    while(true){
        cout << "Introduce un número: ";
        cin >> valor;
        if(valor < 0){
            continue;
        }
        suma += valor;
        if(valor != 0){
            numeros++;
        } else {
            break;
        }
    }
    promedio = suma / numeros;
    cout << fixed << setprecision(2);
    cout << left << setw(10) << "Suma: " << setw(10) << suma << endl;
    cout << left << setw(10) << "Promedio: " << setw(10) << promedio << endl;
    
    return 0;
}
