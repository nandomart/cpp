#include <iostream>

using namespace std;

int main()
{
    int aleatorio, intentos, n;
    char salir;
    bool gano;
    srand(time(NULL));
    do
    {
        // inicio del juego nuevo
        // intentos = 0;
        gano = false;
        aleatorio = (rand() % 100) + 1;
        // while(intentos < 10 && !gano){
        for (intentos = 0; intentos < 10 && !gano; intentos++)
        {
            // reglas del juego
            cout << "Adivina el número entre 1 y 100: ";
            cin >> n;
            if (n == aleatorio)
            {
                gano = true;
            }
            else if (aleatorio > n)
            {
                cout << n << " no es el número. El número es mayor.\n";
            }
            else
            {
                cout << n << " no es el número. El número es menor.\n";
            }
            // intentos++;
        }
        if (gano)
        {
            cout << "FELICIDADES ADIVINASTE EL NUMERO.\n";
        }
        else
        {
            cout << "Has perdido. El número era: " << aleatorio << endl;
        }
        cout << "Desea salir? S/N ";
        cin >> salir;
    } while (!(salir == 'S' || salir == 's'));

    return 0;
}