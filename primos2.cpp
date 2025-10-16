#include <iostream>
#include <cmath>
#include <unistd.h>

using namespace std;

int main(){
    int entrada, divisor, limite, contador = 0;
    bool esPrimo = true;
    while (true)
    {
        cout << "Número entero > 1: ";
        cin >> entrada;
        if(entrada > 1)
            break;
        else{
            cout << "Entrada no válida, intente de nuevo.\n";
            sleep(3);
        }
    }

    limite = sqrt(entrada);
    divisor = 2;
    while(divisor <= limite){
        contador++;
        if(entrada % divisor == 0){
            esPrimo = false;
            break;
        }
        if(divisor == 2){
            divisor++;
        } else{
            divisor += 2;
        }
    }
    if(esPrimo){
        cout << "El " << entrada << " ES PRIMO\n";
    } else{
        cout << "El " << entrada << " NO ES PRIMO\n";
    }
    cout << "El programa itero " << contador << " veces\n";
    return 0;
}