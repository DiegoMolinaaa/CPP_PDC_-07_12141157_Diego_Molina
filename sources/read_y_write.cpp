#include <iostream>
using namespace std;
int main() {
	const int TAMANIO = 80;
	char buffer[TAMANIO];
	cout << "Escriba un enunciado:" << endl;
	cin.read(buffer, 20);
	cout << endl << "El enunciado que escribio fue:" << endl << "(";
	cout.write(buffer, cin.gcount());
	cout << ")" << endl;

	cout << "gcount: " << cin.gcount();

	buffer[10] = '\0';

	cout << "\nbuffer: " << buffer;
}