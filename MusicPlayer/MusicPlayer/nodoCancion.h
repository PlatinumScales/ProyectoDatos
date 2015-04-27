#pragma once
#include "cancion.h"
class nodoCancion
{
public:
	nodoCancion();
	nodoCancion(char *name, char*path);
	~nodoCancion();
	nodoCancion *getSgte();
	nodoCancion *getAnte();
	void setSgte(nodoCancion *);
	void setAnte(nodoCancion *);
	cancion *getCancion();
	//void setCancion(cancion *);
	cancion *hacerCancion(char *, char*);
	cancion *song;

	//nombre por ahora
	char nombre[30];
	

	char * getNombre();

private:
	nodoCancion* anterior;
	nodoCancion* siguiente;
};

