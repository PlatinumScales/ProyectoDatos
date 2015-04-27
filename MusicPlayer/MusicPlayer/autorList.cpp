#include "autorList.h"
#include <stddef.h>
#include <iostream>

using namespace std;


autorList::autorList(void)
{
	setCab(NULL);
}


autorList::~autorList(void)
{
}


nodoAutor *autorList::getCab(){
	return this->cab;
}
void autorList::setCab(nodoAutor *_cab){
	this->cab = _cab;
}
nodoAutor *autorList::dirNodo(char * _autor){
	//Devuelve la direccion del nodo cuyo nombre de autor sea _autor
	//getOAutor es el nombre del info***

	nodoAutor *aux = getCab();
	bool encontrado = true;
	while (aux != NULL &&	!encontrado){

		if (aux->getOAutor()->getNombre() != _autor)
			aux = aux->getSgte();
		else
			encontrado = true;
	}
	return aux;
}

bool autorList::insertarAutor(autor *_autor){

	//si no lo encuentra entonce lo inserta
	nodoAutor *aux = getCab();
	bool insertar;
	if (aux == NULL){//lista esta vacia
		nodoAutor *temp = new nodoAutor();
		temp->setOAutor(_autor);
		temp->setSgte(NULL);
		setCab(temp);
		return insertar = true;
	}
	else{
		if (aux != NULL){// la lista esta llena pone al nuevo nodo en el inicio de la lista
			nodoAutor *aux = getCab();
			nodoAutor *temp = new nodoAutor();
			temp->setOAutor(_autor);
			temp->setSgte(aux);
			setCab(temp);
			return insertar = true;
		}
		else{//si no cumple las anteriores quiere decir que no fue insertado
			return insertar = false;
		}

	}
}

bool autorList::vacia(){
	bool vacia;
	if (getCab() == NULL)
		return vacia = true;
	else
	{
		return vacia = false;
	}
}

bool autorList::eliminarAutor(char *_autor){
	bool eliminado = false;
	nodoAutor *aux = getCab();
	if (aux != NULL){
		// revisar la cabeza
		if (strcmp(aux->getOAutor()->getNombre(), _autor) == 0){
			setCab(aux->getSgte());
			delete aux;
			return true;
		}
		//revisar el cuerpo
		while (aux->getSgte() != NULL){
			if (strcmp(aux->getSgte()->getOAutor()->getNombre(), _autor) == 0){
				nodoAutor *aux2 = aux->getSgte();
				aux->setSgte(aux2->getSgte());
				delete aux2;
				return true;
			}
			else
			{
				aux = aux->getSgte();
			}
		}
	}
	return eliminado;
}

bool autorList::buscar(char * _autor){

	nodoAutor *aux = getCab();
	bool encontrado = false;
	while (aux != NULL){
		if (strcmp(aux->getOAutor()->getNombre(), _autor) != 0)
			aux = aux->getSgte();

		else {
			return encontrado = true;
		}
	}
	return encontrado = false;

}

void autorList::desplegarLISTA(){
	//Desplegar los datos de la estructura 
	nodoAutor *aux = getCab();
	while (aux != NULL){
		cout << "Nombre " << aux->getOAutor()->getNombre() << endl;
		aux = aux->getSgte();

	}
}

nodoAutor *autorList::DirULTIMO(){
	//Devuelve la direccion del ultimo nodo de la lista
	// Si la lista esta vacia devuelve NULL

	nodoAutor *aux = NULL;
	if (getCab() != NULL){//si es null significa que la lista esta vacia
		aux = getCab();
		while (aux->getSgte() != NULL){
			aux = aux->getSgte();//pasar al siguiente nodo
		}
	}
	return aux;
}