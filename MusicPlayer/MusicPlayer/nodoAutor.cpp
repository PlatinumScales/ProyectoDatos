#include "nodoAutor.h"


nodoAutor::nodoAutor()
{
}
 

nodoAutor::~nodoAutor()
{
}

autor * nodoAutor::getOAutor(){
	return this->oAutor;
}
void nodoAutor::setOAutor(autor * _oAutor){
	this->oAutor = _oAutor;
}

nodoAutor* nodoAutor::getSgte(){
	return this->siguiente;
}
void nodoAutor::setSgte(nodoAutor * _sgte){
	this->siguiente = _sgte;
}
