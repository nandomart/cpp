#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

struct Libro {
    string autor;
    string titulo;
    string isbn;
    int anioPublicacion;
};

// Cargar libros desde archivo CSV
vector<Libro> cargarLibros(const string& nombreArchivo) {
    vector<Libro> libros;
    ifstream archivo(nombreArchivo);
    string linea;

    while (getline(archivo, linea)) {
        stringstream ss(linea);
        string autor, titulo, isbn, anioStr;
        getline(ss, autor, ',');
        getline(ss, titulo, ',');
        getline(ss, isbn, ',');
        getline(ss, anioStr, ',');

        Libro libro = {autor, titulo, isbn, stoi(anioStr)};
        libros.push_back(libro);
    }

    archivo.close();
    return libros;
}

// Guardar libros en archivo CSV
void guardarLibros(const vector<Libro>& libros, const string& nombreArchivo) {
    ofstream archivo(nombreArchivo);
    for (const auto& libro : libros) {
        archivo << libro.autor << "," << libro.titulo << "," << libro.isbn << "," << libro.anioPublicacion << endl;
    }
    archivo.close();
}

// Mostrar libros
void mostrarLibros(const vector<Libro>& libros) {
    if (libros.empty()) {
        cout << "No hay libros registrados.\n";
        return;
    }

    for (size_t i = 0; i < libros.size(); ++i) {
        cout << "\nLibro #" << i + 1 << endl;
        cout << "Autor: " << libros[i].autor << endl;
        cout << "Título: " << libros[i].titulo << endl;
        cout << "ISBN: " << libros[i].isbn << endl;
        cout << "Año de publicación: " << libros[i].anioPublicacion << endl;
    }
}

// Agregar libro
void agregarLibro(vector<Libro>& libros) {
    Libro libro;
    cin.ignore();
    cout << "Autor: ";
    getline(cin, libro.autor);
    cout << "Título: ";
    getline(cin, libro.titulo);
    cout << "ISBN: ";
    getline(cin, libro.isbn);
    cout << "Año de publicación: ";
    cin >> libro.anioPublicacion;

    libros.push_back(libro);
    cout << "Libro agregado exitosamente.\n";
}

// Modificar libro
void modificarLibro(vector<Libro>& libros) {
    mostrarLibros(libros);
    cout << "\nIngrese el número del libro a modificar: ";
    int indice;
    cin >> indice;
    if (indice < 1 || indice > libros.size()) {
        cout << "Índice inválido.\n";
        return;
    }

    cin.ignore();
    cout << "Nuevo autor: ";
    getline(cin, libros[indice - 1].autor);
    cout << "Nuevo título: ";
    getline(cin, libros[indice - 1].titulo);
    cout << "Nuevo ISBN: ";
    getline(cin, libros[indice - 1].isbn);
    cout << "Nuevo año de publicación: ";
    cin >> libros[indice - 1].anioPublicacion;

    cout << "Libro modificado exitosamente.\n";
}

// Eliminar libro
void eliminarLibro(vector<Libro>& libros) {
    mostrarLibros(libros);
    cout << "\nIngrese el número del libro a eliminar: ";
    int indice;
    cin >> indice;
    if (indice < 1 || indice > libros.size()) {
        cout << "Índice inválido.\n";
        return;
    }

    libros.erase(libros.begin() + (indice - 1));
    cout << "Libro eliminado exitosamente.\n";
}

int main() {
    const string nombreArchivo = "libros.csv";
    vector<Libro> libros = cargarLibros(nombreArchivo);

    int opcion;
    do {
        cout << "\n--- Menú ---\n";
        cout << "1. Agregar libro\n";
        cout << "2. Ver libros guardados\n";
        cout << "3. Modificar libro\n";
        cout << "4. Eliminar libro\n";
        cout << "5. Salir\n";
        cout << "Seleccione una opción: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                agregarLibro(libros);
                guardarLibros(libros, nombreArchivo);
                break;
            case 2:
                mostrarLibros(libros);
                break;
            case 3:
                modificarLibro(libros);
                guardarLibros(libros, nombreArchivo);
                break;
            case 4:
                eliminarLibro(libros);
                guardarLibros(libros, nombreArchivo);
                break;
            case 5:
                cout << "Saliendo del programa. ¡Hasta pronto!\n";
                break;
            default:
                cout << "Opción inválida. Intente de nuevo.\n";
        }
    } while (opcion != 5);

    return 0;
}
