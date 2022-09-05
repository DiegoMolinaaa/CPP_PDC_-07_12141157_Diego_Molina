#pragma once
#include <fstream>
#include <iostream>
#include "Contacto.h"
class Operaciones
{
	fstream fcont;
public:
	Operaciones();
	Operaciones(fstream&);
	void escribir_o_leer(bool);
	void leer_el_3(Contacto&);
	void escribir_el_3(Contacto&);
	void cambios();
};

