#include <iostream>
using namespace std;
#define TAMANIO 80
int main() {
	//const int TAMANIO = 80;
	char buffer[TAMANIO];
	cout << "Escriba un enunciado:" << endl;
	cin.getline(buffer, TAMANIO);
	cout << "\nEl enunciado introducido es:" << endl << buffer << endl;
}