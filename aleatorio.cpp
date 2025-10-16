#include <iostream>

using namespace std;

int main(){
    int aleatorio;
    srand(time(NULL));
    for(int i = 1; i <= 5; i++){
        aleatorio = rand();
        cout << i << ".-\t" << aleatorio << endl;
    }
    return 0;
}