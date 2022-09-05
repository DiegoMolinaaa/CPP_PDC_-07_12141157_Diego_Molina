#include <iostream>
using namespace std;
int main()
{
    int caracter; // usa int, ya que char no puede representar EOF
    cout << "Antes de la entrada, cin.eof() es " << cin.eof() << endl
        << "Escriba un enunciado seguido del fin de archivo:" << endl;
    while ((caracter = cin.get()) != EOF) {
        cout << "[";
        cout.put(caracter);
        cout << "]";
    }
    cout << "\nEOF en este sistema es: " << caracter << endl;
    cout << "Despues de introducir EOF, cin.eof() es " << cin.eof() << endl;

}