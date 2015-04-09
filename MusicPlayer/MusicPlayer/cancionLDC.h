#pragma once
#include "nodoCancion.h"

class cancionLDC
{
	//Lista Doble circular

private:
	char* nombre; // nombre del playlist / album / genero
	nodoCancion* cab;
	cancionLDC* anterior; //CancionLDC es una lista pero tambien un nodo de ListaDeListas
	cancionLDC* siguiente;

public:
	cancionLDC();
	~cancionLDC();

	//implementacion
};

