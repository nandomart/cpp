#include <iostream>
#include <string>


using namespace std;

int main() {
    string nombre;
    int edad;
    
    nombre = "Hola soy Fernando.\n";
    cout << nombre.find('@') << endl;
    cout << nombre.find('d', 16) << endl;
    cout << std::string::npos << endl;
}
