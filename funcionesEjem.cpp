#include <iostream>

using namespace std;

double sumar(double a, double x);
int sumar(int x, int y);
long factorial(long n);
string imprimirRango(int inicio, int fin);

double PI = 3.1416; //VARIABLE GLOBAL

int main(){
    double a = 6, b = 15, c = 0;
    c = sumar(a, b);
    cout << a << " + " << b << " = " << c << endl;
    cout << a << "! = " << factorial(a) << endl;
    cout << "C(" << b << ", " << a << ") = " << factorial(b) / (factorial(a)* factorial(b-a)) << endl;
    string texto = imprimirRango(3, 7);
    cout << texto << endl;
    return 0;
}

string imprimirRango(int inicio, int fin){
    if(fin > inicio){
        return to_string(inicio) + ", " + imprimirRango(inicio + 1, fin);
    } else{
        return to_string(fin);
    }
}

double sumar(double a, double b){
    return a + b;
}

int sumar(int z, int m){
    return z + m;
}

long factorial(long n){
    if(n > 1){
        return n * factorial(n-1);
    } else{
        return 1;
    }
}