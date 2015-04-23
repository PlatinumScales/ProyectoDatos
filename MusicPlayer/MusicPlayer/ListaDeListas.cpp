#include "listaDeListas.h"



listaDeListas::listaDeListas()
{
	size = 0;
	this->cab = nullptr;
}


listaDeListas::~listaDeListas()
{
}

void listaDeListas::insertar(cancionLDC *sl){
	//Inserta una nueva lista
	if (size > 0){

	}
	else{
		setCab(sl);
	}
} 
void listaDeListas::insertar(int nlista, cancion *song){
	//inserta la cancion "song" en la lista numero "nlista"
} 

void listaDeListas::eliminar(cancionLDC *sl){
}
void listaDeListas::eliminar(int nlista){}
void listaDeListas::eliminar(int nlista, cancion *song){}
void listaDeListas::eliminar(int nlista, int nCancion){}

int listaDeListas::largo(){

	return 0;
}

cancionLDC *listaDeListas::contiene(char* _nombre){
	return new cancionLDC();
}