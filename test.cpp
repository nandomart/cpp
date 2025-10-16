#include <iostream>
#include <string>


using namespace std;

int main() {
    string nombre;
    int edad;
    
    //cin >> nombre;
    for(int i = 0; i < 3; i++){
        cout << "Nombre: ";
        getline(cin, nombre);
        cout << "Edad: ";
        cin >> edad;
        cout << "El dato introducido es: " << nombre << ". Edad: " << edad << endl;
        cin.ignore();
    }
    
}
