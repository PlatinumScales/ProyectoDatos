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

cancionLDC *listaDeListas::contiene(char* _nombre){
	cout << "to Do";
	return new cancionLDC();
}

cancionLDC *listaDeListas::get(int nlista){
	if (nlista > size|| nlista < 0){
		return NULL;
	}
	else{
		cancionLDC* aux = cab;
		for (int i = 0; i < size; i++){
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
		cout << "-" << indx << aux->getNombre() << endl;
		aux = aux->getSgt();
		indx++;
	}
	
}