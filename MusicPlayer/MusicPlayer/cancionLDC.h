#pragma once
#include "nodoCancion.h"

class cancionLDC
{
	//Lista Doble circular

private:
	char nombre[20]; // nombre del playlist / album / genero
	nodoCancion* cab;
	cancionLDC* anterior; //CancionLDC es una lista pero tambien un nodo de ListaDeListas
	cancionLDC* siguiente;

public:
	cancionLDC();
	cancionLDC(char *);
	~cancionLDC();

	//implementacion


	nodoCancion *getCab();
	void setCab(nodoCancion *);

	int getSize();
	bool vacia();
	nodoCancion *dirNodo(char *);

	char* getNombre();


	bool agregar(cancion *);
	bool agregar(nodoCancion * );
	bool agregar(char *,char* );
	bool eliminar(char * );
	void mostrarLista();
	void removeNodo(nodoCancion *aux);

	cancion * get(int i);

//	cancionLDC * clone();

	cancionLDC *getAnte();
	void setAnte(cancionLDC *nAnte);

	cancionLDC *getSgt();
	void setSgt(cancionLDC *nDesp);

	cancionLDC* contains(char* _nombre);// regresa una lista de canciones cuyo nombre contiene _nombre

	bool buscarGenero(char * _genero);
	bool buscarCancion(char * _cancion);
};

