	#pragma once
#include "cancionLDC.h"
#include "cancion.h"

class listaDeListas
{
	//lista doble lineal

private:
	cancionLDC * cab;
	cancionLDC * ultimo;
	int size;
	void setCab(cancionLDC * c);

public:
	listaDeListas();
	~listaDeListas();
	cancionLDC *get(int nlista);

	void insertar(cancionLDC *sl); //Inserta una nueva lista
	void insertar(int nlista, cancion *song); //inserta la cancion "song" en la lista numero "nlista"

	void eliminar(int nlista);

	int largo(); 
	cancionLDC *contiene(char* _nombre); //devuleve una sola lista con todas las canciones que contengan _nombre en todas las listas


};

