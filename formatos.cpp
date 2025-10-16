#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    double precio = 199.99;
    double impuesto = precio * 0.13;
    cout << fixed << setprecision(3);
    cout << setw(10) <<  "Precio: " << setw(10) << precio << endl;
    cout << setw(10) << "Impuesto: " << setw(10) << impuesto << endl;
    return 0;
}