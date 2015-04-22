#pragma once
#include "cancionLDC.h"
#include "cancion.h"

class listaDeListas
{

private:
	cancionLDC * cab;
	int size;

public:
	listaDeListas();
	~listaDeListas();

	void insertar(cancionLDC sl); //Inserta una nuvea lista
	void insertar(int nlista, cancion song); //inserta la cancion "song" en la lista numero "nlista"

	void eliminar(cancionLDC sl);
	void eliminar(int nlista);
	void eliminar(int nlista, cancionLDC sl);
	void eliminar(int nlista, cancionLDC sl);

	int largo(); 
	cancionLDC contiene(char* _nombre); //devuleve una sola lista con todas las canciones que contengan _nombre en todas las listas










};

