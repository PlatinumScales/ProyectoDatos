#pragma once
#include "nodoAutor.h"
class autorList{

private:
	nodoAutor *cab;
	nodoAutor * getCab();
	void  setCab(nodoAutor *_cab);

	nodoAutor * dirNodo(char* _autor);

public:
	autorList();
	~autorList();
	bool  vacia();

	bool  insertarAutor(char *_autor);
	bool  eliminarAutor(char * _autor);
	bool  modificarAutor(char *_buscar, char *nuevoAutor);
	char * buscar(char * _autor);
	void  desplegarLISTA();
};