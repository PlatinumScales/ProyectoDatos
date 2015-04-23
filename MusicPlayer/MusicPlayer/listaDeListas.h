#pragma once
#include "cancionLDC.h"
#include "cancion.h"

class listaDeListas
{
	//lista doble lineal

private:
	cancionLDC * cab;
	int size;
	void setCab(cancionLDC * c);

public:
	listaDeListas();
	~listaDeListas();

	void insertar(cancionLDC *sl); //Inserta una nueva lista
	void insertar(int nlista, cancion *song); //inserta la cancion "song" en la lista numero "nlista"

	void eliminar(cancionLDC *sl);
	void eliminar(int nlista);
	void eliminar(int nlista, cancion *song);
	void eliminar(int nlista, int nCancion);

	int largo(); 
	cancionLDC *contiene(char* _nombre); //devuleve una sola lista con todas las canciones que contengan _nombre en todas las listas


};

