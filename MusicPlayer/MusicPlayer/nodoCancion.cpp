#include "nodoCancion.h"
#include "stdafx.h"





nodoCancion::nodoCancion()
{
}

nodoCancion::nodoCancion(cancion *lel)
{
	song = lel;
}


nodoCancion::~nodoCancion()
{

	this->song = new cancion();
}

cancion *nodoCancion::hacerCancion(char *name, char*path){
	return new cancion(name,path);
}



nodoCancion::nodoCancion(char *name, char*path){
//	setCancion(_nombre,path);
	

	this->song = hacerCancion( name, path);

}




 cancion *nodoCancion::getCancion(){

	// cancion *lel = new cancion();
	 return this->song;
}




	nodoCancion *nodoCancion::getSgte(){ return this->siguiente;}
	nodoCancion *nodoCancion::getAnte(){return this->anterior;}
	void nodoCancion::setSgte(nodoCancion *sgte){this->siguiente = sgte;}
	void nodoCancion::setAnte(nodoCancion *ante){this->anterior = ante;}
	char *nodoCancion::getNombre(){ return this->nombre;}