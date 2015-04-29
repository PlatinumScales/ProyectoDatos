#include "listaDeListas.h"
#include "stdafx.h"


listaDeListas::listaDeListas()
{
	size = 0;
	this->cab = NULL;
	this->ultimo = NULL;
}


listaDeListas::~listaDeListas()
{
}


cancionLDC *listaDeListas::getCab(){

	return cab;
}
cancionLDC *listaDeListas::contiene(char* _nombre){
//	cout << "to Do";

	cancionLDC *cab = getCab();

	do{

		if (strcmp(cab->getNombre(), _nombre) == 0){

			return cab;
		}

		cab = cab->getSgt();
	} while (cab != NULL);


	return new cancionLDC();
}

void listaDeListas::insertar(cancionLDC *sl){
	//Inserta una nueva lista
	if (size == 0){
		this->cab = sl;
		this->ultimo = sl;
	}
	else{
		sl->setAnte(ultimo);
		ultimo->setSgt(sl);
		ultimo = sl;
	}
	size++;
} 

void listaDeListas::insertar(int nlista, cancion *song){
	//get(nlista)->agregar(*song);
	cout << "TO DO";
} 

void listaDeListas::eliminar(int nlista){
	cancionLDC *aux = get(nlista);
	aux->getAnte()->setSgt(aux->getSgt());
	aux->getSgt()->setAnte(aux->getAnte());
	delete aux;
	size--;
}


int listaDeListas::largo(){

	return size;
}



cancionLDC *listaDeListas::get(int nlista){
	if (nlista > size|| nlista < 0){
		return NULL;
	}
	else{
		cancionLDC* aux = cab;
		for (int i = 0; i < nlista; i++){
			aux = aux->getSgt();
		}
		return aux;
	}
}

void listaDeListas::setCab(cancionLDC * c){
	this->cab = c;
}

void listaDeListas::mostrarTodo(){
	cancionLDC* aux = cab;
	int indx = 0;
	while (aux != NULL)
	{
		cout << "-" << indx << aux->getNombre() << endl;
		cout << endl;
		cout << endl;
		aux->mostrarLista();
		aux = aux->getSgt();
		indx++;
	}

}


void listaDeListas::mostrar(){
	cancionLDC* aux = cab;
	int indx = 0;
	while (aux!= NULL)
	{
		cout << "( " << indx <<  " )" << aux->getNombre() << endl;
		aux = aux->getSgt();
		indx++;
	}
	
}