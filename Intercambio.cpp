#include <iostream>

using namespace std;

void intercambiar(int *a, int *b);

int main(){
    int n1 = 25, n2 = 30;
    intercambiar(&n1, &n2);
    cout << "N1: " << n1 << endl;
    cout << "N2: " << n2 << endl;
    return 0;
}

void intercambiar(int *a, int *b){
    int aux = *a;
    *a = *b;
    *b = aux;
}