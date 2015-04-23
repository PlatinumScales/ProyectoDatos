#include "nodoCancion.h"
#include "stdafx.h"


nodoCancion::nodoCancion()
{
}


nodoCancion::~nodoCancion()
{
}


nodoCancion::nodoCancion(char *_nombre){
	strcpy_s(nombre,_nombre);
}




	nodoCancion *nodoCancion::getSgte(){ return this->siguiente;}
	nodoCancion *nodoCancion::getAnte(){return this->anterior;}
	void nodoCancion::setSgte(nodoCancion *sgte){this->siguiente = sgte;}
	void nodoCancion::setAnte(nodoCancion *ante){this->anterior = ante;}
	char *nodoCancion::getNombre(){ return this->nombre;}