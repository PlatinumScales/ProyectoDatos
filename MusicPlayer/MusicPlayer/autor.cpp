#include "autor.h"
#include"stdafx.h"
autor::autor(void)
{
}


autor::~autor(void)
{
}

autor::autor(char *_nombre){
	setNombre(_nombre);
}
char *autor::getNombre(){
	return this->nombre;
}
void autor::setNombre(char * _nombre){
	strcpy_s(this->nombre, _nombre);
}
 
bool autor::insertarAlbum(cancionLDC * alb){
	albumes->insertar(alb);
	return true;
}