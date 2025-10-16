#include <iostream>
#include <string>


using namespace std;

int main() {
    string nombre, apellido, nombre_completo, mayus;
    int spacio;
    cout << "Nombre y apellido: ";
    getline(cin, nombre_completo);
    spacio = nombre_completo.find(" ");
    if(spacio > 0){
        nombre = nombre_completo.substr(0, spacio);
        apellido = nombre_completo.substr(spacio + 1, nombre_completo.length() - spacio);
    } 
    
    mayus = "";
    for(char c : nombre_completo){
        mayus += toupper(c);
    }
    nombre[0] = toupper(nombre[0]);
    apellido[0] = toupper(apellido[0]);
    cout << "EN MAYUSCULAS: " << mayus << endl;
    cout << "Longitud: " << mayus.length() << endl;
    cout << "Hola " << nombre << "! es un gusto tenerte aquí.\n";
}
