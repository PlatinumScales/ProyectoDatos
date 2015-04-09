#pragma once
#include "autor.h"

class nodoAutor
{
private:
	autor* oAutor;
	nodoAutor* siguiente;
	nodoAutor* anterior;
public:
	nodoAutor();
	~nodoAutor();

};

