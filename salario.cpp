#include <iostream>

using namespace std;

int main(){
    int horas;
    double salario = 0, impuesto = 0, excedente = 0;
    cout << "Horas: ";
    cin >> horas;
    if(horas > 48){
        salario += (horas - 48) * 375;
        salario += 8 * 250;
        salario += 40 * 125;
    } else if(horas > 40){
        salario += (horas - 40) * 250;
        salario += 40 * 125;
    } else {
        salario += horas * 125;
    }
    excedente = salario - 3500;
    if(excedente > 0){
        impuesto = excedente *0.13;
    }
    cout << "Antes de impuesto: " << salario << endl;
    cout << "Impuesto: " << impuesto << endl;
    cout << "Neto a pagar: " << salario - impuesto << endl;
    return 0;
}