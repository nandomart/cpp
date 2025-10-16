#include <iostream>

using namespace std;

int main(){
    char operacion;
    double resultado, num1, num2;
    cout << "Seleccione una opcion:\n" 
        << "a. Sumar\nb. Restar.";
    cin >> operacion;
    cout << "Numero 1: ";
    cin >> num1;
    cout << "Nuumero 2: ";
    cin >> num2;
    switch (operacion)
    {
    case 'A':
    case 'a':
        resultado = num1 + num2;
        break;
    case 'b':
        resultado = num1 - num2;
        break;
    default:
        cout << "Operacion no valida.\n";
        return 0;
    }
    cout << "Resultado: " << resultado;
    return 0;
}