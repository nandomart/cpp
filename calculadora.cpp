#include <iostream>

using namespace std;

int main(){
    char operacion;
    double resultado, num1, num2;
    cout << "Operacion (+, -, *, /): ";
    cin >> operacion;
    cout << "Numero 1: ";
    cin >> num1;
    cout << "Nuumero 2: ";
    cin >> num2;
    switch (operacion)
    {
    case '+':
        resultado = num1 + num2;
        break;
    case '-':
        resultado = num1 - num2;
        break;
    case '*':
        resultado = num1 * num2;
        break;
    case '/':
        resultado = num1 / num2;
        break;
    default:
        cout << "Operacion no valida.\n";
        return 0;
    }
    cout << "Resultado: " << resultado;
    return 0;
}