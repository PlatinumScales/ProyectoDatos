#include "cancion.h"
#include "stdafx.h"


cancion::cancion()
{
}


cancion::~cancion()
{
}

cancion::cancion(char *_nombre,char*_path){
	setNombre(_nombre);
	setPath(_path);
}
char *cancion::getNombre(){
	return this->nombre ;
}
void cancion::setNombre(char * _nombre){
	strcpy_s(this->nombre, _nombre);
}

char *cancion::getPath(){
	return this->path;
}
void cancion::setPath(char * _nombre){
	strcpy_s(this->path, _nombre);
}