#pragma once
#include "autor.h"

class nodoAutor{
private:
	autor* oAutor;
	nodoAutor* siguiente;

public:
	nodoAutor();
	~nodoAutor();

	autor * nodoAutor::getOAutor();
	void nodoAutor::setOAutor(autor * _oAutor);
	nodoAutor* nodoAutor::getSgte();
	void nodoAutor::setSgte(nodoAutor * _sgte);
};