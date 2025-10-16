#include <iostream>
#include <cmath>

using namespace std;

int main(){
    double radio = 5.0, temp;
    cout << "Area: " << 3.14159 * radio * radio << endl;
    cout << "Area: " << pow(radio, 2) * 3.14159 << endl;
    cout << "Area: " << pow(radio, 2) * M_PI << endl;
    cout << M_PI << endl;
    cout << sqrt(9) << endl;
    cout << pow(64, 1/3.0) << endl;
    temp = pow(radio, 2) * M_PI * 100; //7853.98
    temp = round(temp); //7854
    temp /= 100; //78.54
    cout << temp << endl;
    return 0;
}