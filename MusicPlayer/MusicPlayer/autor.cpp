#include "autor.h"


autor::autor()
{
}


autor::~autor()
{
}

char *autor::getNombre(){
	return this->nombre;
}
void autor::setNombre(char * _nombre){
	this->nombre, _nombre;
} 